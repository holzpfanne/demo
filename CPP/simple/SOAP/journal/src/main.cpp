#include <BasicHttpBinding_USCOREIPOS.nsmap>
#ifdef _WIN32
    #include <soapBasicHttpBinding_USCOREIPOSProxy.h>
#else
    #include <soapH.h>
#endif
//#include <inttypes.h> //int64_t, uint64_t
//#include <stdio.h>    /* printf, sprintf */
//#include <stdlib.h>   /* exit, atoi, malloc, free */
#include <iostream>
#include <string>

using namespace std;

#ifdef _WIN32
#define type_Echo_request _ns1__Echo
#define type_Echo_response _ns1__EchoResponse
#define new_echo_request(soap, message) soap_new_set__ns1__Echo(soap, message)
#else //Linux
#define type_Echo_request _tempuri__Echo
#define type_Echo_response _tempuri__EchoResponse
#define new_echo_request(soap, message) soap_new_set__tempuri__Echo(soap, message)
#endif

std::string &ltrim(std::string &str, const std::string &chars = "\t\n\v\f\r ") {
    str.erase(0, str.find_first_not_of(chars));
    return str;
}

std::string &rtrim(std::string &str, const std::string &chars = "\t\n\v\f\r ") {
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}

std::string &trim(std::string &str, const std::string &chars = "\t\n\v\f\r ") {
    return ltrim(rtrim(str, chars), chars);
}

void get_input(string *ServiceURL, string *message) {

    // Getting all the input
    // ask for Service URL
    cout << "Please enter the serviceurl of the fiskaltrust.Service: ";
    getline(cin, *ServiceURL);

    // get message
    cout << "Please enter the message to send in the echo request: ";
    getline(cin, *message);

    // trim the input strings
    trim(*ServiceURL);
    trim(*message);

    // if ServiceURL end with '/' -> delete it
    if ((*ServiceURL).back() == '/') {
        (*ServiceURL).pop_back();
    }
}

int main() {
    cout << "This example sends a echo to the fiskaltrust.Service via SOAP\n";

    string ServiceURL, message;

    get_input(&ServiceURL, &message);

    //init echo class
    struct soap *ft = soap_new();

    class type_Echo_request *Echo_request = new_echo_request(ft, (char*)message.c_str());

    class type_Echo_response Echo_response;

    //make call
    cout << "making call... ";

    int soap_response;
    #ifdef _WIN32
        BasicHttpBinding_USCOREIPOSProxy echo_handler(ServiceURL.c_str());

        soap_response = echo_handler.Echo(Echo_request, Echo_response);
    #else
        soap_response = soap_call___tempuri__Echo(ft,ServiceURL.c_str(),NULL, Echo_request, Echo_response));
    #endif
    if(soap_response == SOAP_OK) {
        cout << "OK" << endl;
        cout << "Response: " << Echo_response.EchoResult << endl;
    } else {
        cout << "done" << endl;
        soap_print_fault(ft, stderr);
    }

    soap_destroy(ft); // dealloc serialization data
    soap_end(ft);     // dealloc temp data
    soap_free(ft);    // dealloc 'soap' engine context
    return 0;
}