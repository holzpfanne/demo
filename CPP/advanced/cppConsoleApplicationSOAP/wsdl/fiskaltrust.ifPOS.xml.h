﻿
// File generated by Wsutil Compiler version 1.0095 
// This file defines C/C++ functions, callbacks, types that correspond to operations,
// and types specified in WSDL and XSD files processed by Wsutil compiler. The generated 
// type definitions, function and callback declarations can be used with various 
// Web Services APIs either in applications that send and receive requests to and 
// from a running web service, or in the implementation of web services, or in both. 
//
// If Wsutil has generated this file from a WSDL file, the file may contain up to three 
// sets of C/C++ definitions. The first set consists of function declarations that can be 
// used in calling operations on a running web service from client applications. 
// The second set consists of callback declarations that can be used in the 
// implementation of web services.  
// The third set contains definitions C/C++ structures that are used for serialization of 
// C/C++ types to Schema types defined in the WSDL file.
//
// The set of function declarations for web services clients may contain the 
// following declaration: 
//
//    HRESULT WINAPI DefaultBinding_ICalculator_Add(
//       _In_ WS_SERVICE_PROXY* _serviceProxy,
//       _In_ int a, 
//       _In_ int b, 
//       _Out_ int* result, 
//       _In_ WS_HEAP* _heap,
//       _In_opt_ WS_CALL_PROPERTY* _callProperties,
//       _In_ const ULONG _callPropertyCount,
//       _In_opt_ const WS_ASYNC_CONTEXT*_asyncContext,
//       _In_opt_ WS_ERROR* _error);
//
// This function can be called from an application code to request ICalculator web 
// service to perform operation Add using two integers a and b as input data.
// Once the web service processes this request and sends the result back,
// the result is returned to the caller of this function in the "result" parameter.
// A WS_SERVICE_PROXY must be created using WsCreateServiceProxy() function
// before this proxy function can be invoked.
//
// The set of callbacks for implementation of web services may contain the following 
// definition of a callback: 
//
//    typedef HRESULT (CALLBACK* DefaultBinding_ICalculator_AddCallback) (
//       _In_ const WS_OPERATION_CONTEXT* _context,
//       _In_ int a, 
//       _In_ int b, 
//       _Out_ int* result, 
//       _In_ const WS_ASYNC_CONTEXT* _asyncContext,
//       _In_ WS_ERROR* _error); 
//
//    typedef struct DefaultBinding_ICalculatorFunctionTable 
//    {
//         DefaultBinding_ICalculator_AddCallback DefaultBinding_ICalculator_Add;
//    } DefaultBinding_ICalculatorFunctionTable;
//
// This definition can be used to implement a function that defines the Add operation 
// as a part of an ICalculator web service. Once this callback is implemented and 
// the web service is deployed and running, if a client applications attempts to 
// execute the operation Add, the implementation of this callback is called and 
// it receives two integers a and b as input data and it returns a third integer 
// that is the result of the operation. A WS_SERVICE_ENDPOINT must be filled out, 
// and its contract field set to instance of such a function table.  
// WsCreateServiceHost may then be used to register the endpoint as a service.
// 
// The set with definitions of C/C++ structures may contain a definition of the following 
// structure:
//    typedef struct ContactInfo 
//    {
//			WCHAR*  name;
//			WCHAR*  email;
//			__int64 contactID;
//	  } ContactInfo;
//
// This structure corresponds to the following complex type defined in the WSDL file:
//    <s:complexType name="ContactInfo">
//      <s:sequence>
//        <s:element minOccurs="1" maxOccurs="1" name="name" type="s:string" />
//        <s:element minOccurs="1" maxOccurs="1" name="email" type="s:string" />
//        <s:element minOccurs="1" maxOccurs="1" name="contactID" type="s:long" />
//      </s:sequence>
//    </s:complexType>
//
// For more information about content of this file, please see the documentation for
// Wsutil compiler.
// If Wsutil has generated this file from an XSD file, the file contains definition of 
// C/C++ structures types that correspond to types defined in the XSD file. 
// For example, if the following XSD complexType is defined in the XSD file
//
//      <xsd:complexType name="AddRequest">
//          <xsd:sequence>
//              <xsd:element minOccurs="0" name="a" type="xsd:int" />
//              <xsd:element minOccurs="0" name="b" type="xsd:int" />
//          </xsd:sequence>
//      </xsd:complexType>
// 
// this file contains the following definitions of the structure 
//      // AddRequest (xsd:complexType)
//      // <AddRequest xmlns='http://tempuri.org'>
//      // WS_STRUCT_DESCRIPTION* = &calculator_xsd.globalTypes.AddRequest
//      struct AddRequest
//      {
//          int a;
//          int b;
//      };
//
// For more information on how to use the C/C++ types generated in this file to read or write elements of XML documents that conform to 
// this XSD, please see the documentation for 
// WsReadType() and WsWriteType() functions.
// 
// If Wsutil generates this file from a WSDL file and policy processing is enabled using
// policy switch, the file may contain declaration of functions that can be used 
// for creating a proxy to a web service or an endpoint of a web service. 
// For example, the file may contain declaration of the following function:
//
//    HRESULT DefaultBinding_ICalculator_CreateServiceProxy(
//    _In_ WS_HTTP_SSL_BINDING_TEMPLATE* templateValue,
//    _In_reads_opt_(proxyPropertyCount) const WS_PROXY_PROPERTY* proxyProperties,
//    _In_ const ULONG proxyPropertyCount,
//    _Outptr_ WS_SERVICE_PROXY** proxy,
//    _In_opt_ WS_ERROR* error);
//
// This function can be called from application code to create a service
// proxy object. A service proxy must be created before any request can be sent 
// to the web service.
//
// Also, the file may contain declaration of the following function:
//
//    HRESULT DefaultBinding_ICalculator_CreateServiceEndpoint(
//    _In_ WS_HTTP_SSL_BINDING_TEMPLATE* templateValue,
//    _In_opt_ WS_STRING address,
//    _In_opt_ struct DefaultBinding_ICalculatorFunctionTable* functionTable,
//    _In_opt_ WS_SERVICE_SECURITY_CALLBACK authorizationCallback,
//    _In_reads_opt_(endpointPropertyCount) WS_SERVICE_ENDPOINT_PROPERTY* endpointProperties,
//    _In_ const ULONG endpointPropertyCount,
//    _In_ WS_HEAP* heap,
//    _Outptr_ WS_SERVICE_ENDPOINT** serviceEndpoint,
//    _In_opt_ WS_ERROR* error);
//
// This function can be used to create a Service Host object, which has to be 
// created before a web services starts receiving requests from its clients.
//
// For more information about content of this file, please see the documentation for
// Wsutil compiler.
#if _MSC_VER > 1000 
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

// The following client functions were generated:

//     BasicHttpBinding_IPOS_Sign
//     BasicHttpBinding_IPOS_Journal
//     BasicHttpBinding_IPOS_Echo

// The following server function tables were generated:

//     struct BasicHttpBinding_IPOSFunctionTable

// The following types were generated:

//     struct ReceiptRequest;
//     struct ArrayOfChargeItem;
//     struct ChargeItem;
//     struct ArrayOfPayItem;
//     struct PayItem;
//     struct ReceiptResponse;
//     struct ArrayOfSignaturItem;
//     struct SignaturItem;
//     struct ArrayOfstring;
//     struct _Sign;
//     struct _SignResponse;
//     struct _Journal;
//     struct _JournalResponse;
//     struct _Echo;
//     struct _EchoResponse;
//     struct ReceiptRequest;
//     struct ArrayOfChargeItem;
//     struct ChargeItem;
//     struct ArrayOfPayItem;
//     struct PayItem;
//     struct ReceiptResponse;
//     struct ArrayOfSignaturItem;
//     struct SignaturItem;
//     struct ArrayOfstring;

// the following policy helpers were generated:

//  BasicHttpBinding_IPOS_CreateServiceProxy;
//  BasicHttpBinding_IPOS_CreateServiceEndpoint;

// The following header files must be included in this order before this one

// #include <WebServices.h>

////////////////////////////////////////////////
// C structure definitions for generated types
////////////////////////////////////////////////

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ReceiptRequest
typedef struct ReceiptRequest 
{
    WCHAR* ftCashBoxID; // optional
    WCHAR* ftQueueID; // optional
    WCHAR* ftPosSystemId; // optional
    WCHAR* cbTerminalID; // optional
    WCHAR* cbReceiptReference; // optional
    WS_DATETIME cbReceiptMoment;
    unsigned int cbChargeItemsCount;
    _Field_size_opt_(cbChargeItemsCount)struct ChargeItem** cbChargeItems; // optional
    unsigned int cbPayItemsCount;
    _Field_size_opt_(cbPayItemsCount)struct PayItem** cbPayItems; // optional
    __int64 ftReceiptCase;
    WCHAR* ftReceiptCaseData; // optional
    DECIMAL* cbReceiptAmount; // optional
    WCHAR* cbUser; // optional
    WCHAR* cbArea; // optional
    WCHAR* cbCustomer; // optional
    WCHAR* cbSettlement; // optional
    WCHAR* cbPreviousReceiptReference; // optional
} ReceiptRequest;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ChargeItem
typedef struct ChargeItem 
{
    __int64 Position;
    DECIMAL Quantity;
    WCHAR* Description; // optional
    DECIMAL Amount;
    DECIMAL VATRate;
    __int64 ftChargeItemCase;
    WCHAR* ftChargeItemCaseData; // optional
    DECIMAL* VATAmount; // optional
    WCHAR* AccountNumber; // optional
    WCHAR* CostCenter; // optional
    WCHAR* ProductGroup; // optional
    WCHAR* ProductNumber; // optional
    WCHAR* ProductBarcode; // optional
    WCHAR* Unit; // optional
    DECIMAL* UnitQuantity; // optional
    DECIMAL* UnitPrice; // optional
    WS_DATETIME* Moment; // optional
} ChargeItem;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.PayItem
typedef struct PayItem 
{
    __int64 Position;
    DECIMAL Quantity;
    WCHAR* Description; // optional
    DECIMAL Amount;
    __int64 ftPayItemCase;
    WCHAR* ftPayItemCaseData; // optional
    WCHAR* AccountNumber; // optional
    WCHAR* CostCenter; // optional
    WCHAR* MoneyGroup; // optional
    WCHAR* MoneyNumber; // optional
    WS_DATETIME* Moment; // optional
} PayItem;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfChargeItem
typedef struct ArrayOfChargeItem 
{
    unsigned int ChargeItemCount;
    _Field_size_(ChargeItemCount)struct ChargeItem** ChargeItem; // optional
} ArrayOfChargeItem;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfPayItem
typedef struct ArrayOfPayItem 
{
    unsigned int PayItemCount;
    _Field_size_(PayItemCount)struct PayItem** PayItem; // optional
} ArrayOfPayItem;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ReceiptResponse
typedef struct ReceiptResponse 
{
    WCHAR* ftCashBoxID; // optional
    WCHAR* ftQueueID; // optional
    WCHAR* ftQueueItemID; // optional
    __int64 ftQueueRow;
    WCHAR* cbTerminalID; // optional
    WCHAR* cbReceiptReference; // optional
    WCHAR* ftCashBoxIdentification; // optional
    WCHAR* ftReceiptIdentification; // optional
    WS_DATETIME ftReceiptMoment;
    unsigned int ftReceiptHeaderCount;
    _Field_size_opt_(ftReceiptHeaderCount)WCHAR** ftReceiptHeader; // optional
    unsigned int ftChargeItemsCount;
    _Field_size_opt_(ftChargeItemsCount)struct ChargeItem** ftChargeItems; // optional
    unsigned int ftChargeLinesCount;
    _Field_size_opt_(ftChargeLinesCount)WCHAR** ftChargeLines; // optional
    unsigned int ftPayItemsCount;
    _Field_size_opt_(ftPayItemsCount)struct PayItem** ftPayItems; // optional
    unsigned int ftPayLinesCount;
    _Field_size_opt_(ftPayLinesCount)WCHAR** ftPayLines; // optional
    unsigned int ftSignaturesCount;
    _Field_size_opt_(ftSignaturesCount)struct SignaturItem** ftSignatures; // optional
    unsigned int ftReceiptFooterCount;
    _Field_size_opt_(ftReceiptFooterCount)WCHAR** ftReceiptFooter; // optional
    __int64 ftState;
    WCHAR* ftStateData; // optional
} ReceiptResponse;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.SignaturItem
typedef struct SignaturItem 
{
    __int64 ftSignatureFormat;
    __int64 ftSignatureType;
    WCHAR* Caption; // optional
    WCHAR* Data; // optional
} SignaturItem;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfSignaturItem
typedef struct ArrayOfSignaturItem 
{
    unsigned int SignaturItemCount;
    _Field_size_(SignaturItemCount)struct SignaturItem** SignaturItem; // optional
} ArrayOfSignaturItem;

// typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfstring
typedef struct ArrayOfstring 
{
    unsigned int StringCount;
    _Field_size_(StringCount)WCHAR** String; // optional
} ArrayOfstring;

// typeDescription: n/a
typedef struct _Sign 
{
    struct ReceiptRequest* data; // optional
} _Sign;

// typeDescription: n/a
typedef struct _SignResponse 
{
    struct ReceiptResponse* SignResult; // optional
} _SignResponse;

// typeDescription: n/a
typedef struct _Journal 
{
    __int64 ftJournalType;
    __int64 from;
    __int64 to;
} _Journal;

// typeDescription: n/a
typedef struct _JournalResponse 
{
    WS_BYTES JournalResult;
} _JournalResponse;

// typeDescription: n/a
typedef struct _Echo 
{
    WCHAR* message; // optional
} _Echo;

// typeDescription: n/a
typedef struct _EchoResponse 
{
    WCHAR* EchoResult; // optional
} _EchoResponse;

////////////////////////////////////////////////
// Policy helper routines
////////////////////////////////////////////////

//  WS_CHANNEL_PROPERTY_ENCODING = WS_ENCODING_XML_UTF8,
//  WS_CHANNEL_PROPERTY_ADDRESSING_VERSION = WS_ADDRESSING_VERSION_TRANSPORT,
//  WS_ENVELOPE_VERSION = WS_ENVELOPE_VERSION_SOAP_1_1,
// client channel type: WS_CHANNEL_TYPE_REQUEST, service endpoint channel type: WS_CHANNEL_TYPE_REPLY

HRESULT BasicHttpBinding_IPOS_CreateServiceProxy(
    _In_opt_ WS_HTTP_BINDING_TEMPLATE* templateValue,
    _In_reads_opt_(proxyPropertyCount) const WS_PROXY_PROPERTY* proxyProperties,
    _In_ const ULONG proxyPropertyCount,
    _Outptr_ WS_SERVICE_PROXY** _serviceProxy,
    _In_opt_ WS_ERROR* error);

struct BasicHttpBinding_IPOSFunctionTable;
HRESULT BasicHttpBinding_IPOS_CreateServiceEndpoint(
    _In_opt_ WS_HTTP_BINDING_TEMPLATE* templateValue,
    _In_opt_ CONST WS_STRING* address,
    _In_opt_ struct BasicHttpBinding_IPOSFunctionTable* functionTable,
    _In_opt_ WS_SERVICE_SECURITY_CALLBACK authorizationCallback,
    _In_reads_opt_(endpointPropertyCount) WS_SERVICE_ENDPOINT_PROPERTY* endpointProperties,
    _In_ const ULONG endpointPropertyCount,
    _In_ WS_HEAP* heap,
    _Outptr_ WS_SERVICE_ENDPOINT** serviceEndpoint,
    _In_opt_ WS_ERROR* error);

////////////////////////////////////////////////
// Client functions definitions
////////////////////////////////////////////////

// operation: BasicHttpBinding_IPOS_Sign
HRESULT WINAPI BasicHttpBinding_IPOS_Sign(
    _In_ WS_SERVICE_PROXY* _serviceProxy,
    _In_opt_ ReceiptRequest* data, 
    _Outptr_opt_ ReceiptResponse** SignResult, 
    _In_ WS_HEAP* _heap,
    _In_reads_opt_(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    _In_ const ULONG _callPropertyCount,
    _In_opt_ const WS_ASYNC_CONTEXT* _asyncContext,
    _In_opt_ WS_ERROR* _error);

// operation: BasicHttpBinding_IPOS_Journal
HRESULT WINAPI BasicHttpBinding_IPOS_Journal(
    _In_ WS_SERVICE_PROXY* _serviceProxy,
    _In_ __int64 ftJournalType, 
    _In_ __int64 from, 
    _In_ __int64 to, 
    _Out_ WS_BYTES* JournalResult, 
    _In_ WS_HEAP* _heap,
    _In_reads_opt_(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    _In_ const ULONG _callPropertyCount,
    _In_opt_ const WS_ASYNC_CONTEXT* _asyncContext,
    _In_opt_ WS_ERROR* _error);

// operation: BasicHttpBinding_IPOS_Echo
HRESULT WINAPI BasicHttpBinding_IPOS_Echo(
    _In_ WS_SERVICE_PROXY* _serviceProxy,
    _In_opt_z_ WCHAR* message, 
    _Outptr_opt_result_z_ WCHAR** EchoResult, 
    _In_ WS_HEAP* _heap,
    _In_reads_opt_(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    _In_ const ULONG _callPropertyCount,
    _In_opt_ const WS_ASYNC_CONTEXT* _asyncContext,
    _In_opt_ WS_ERROR* _error);

////////////////////////////////////////////////
// Service functions definitions
////////////////////////////////////////////////

typedef HRESULT (CALLBACK* BasicHttpBinding_IPOS_SignCallback) (
    _In_ const WS_OPERATION_CONTEXT* _context,
    _In_opt_ ReceiptRequest* data, 
    _Outptr_opt_ ReceiptResponse** SignResult, 
    _In_ const WS_ASYNC_CONTEXT* _asyncContext,
    _In_ WS_ERROR* _error);

typedef HRESULT (CALLBACK* BasicHttpBinding_IPOS_JournalCallback) (
    _In_ const WS_OPERATION_CONTEXT* _context,
    _In_ __int64 ftJournalType, 
    _In_ __int64 from, 
    _In_ __int64 to, 
    _Out_ WS_BYTES* JournalResult, 
    _In_ const WS_ASYNC_CONTEXT* _asyncContext,
    _In_ WS_ERROR* _error);

typedef HRESULT (CALLBACK* BasicHttpBinding_IPOS_EchoCallback) (
    _In_ const WS_OPERATION_CONTEXT* _context,
    _In_opt_z_ WCHAR* message, 
    _Outptr_opt_result_z_ WCHAR** EchoResult, 
    _In_ const WS_ASYNC_CONTEXT* _asyncContext,
    _In_ WS_ERROR* _error);

// binding: BasicHttpBinding_IPOS
typedef struct BasicHttpBinding_IPOSFunctionTable 
{
    BasicHttpBinding_IPOS_SignCallback BasicHttpBinding_IPOS_Sign;
    BasicHttpBinding_IPOS_JournalCallback BasicHttpBinding_IPOS_Journal;
    BasicHttpBinding_IPOS_EchoCallback BasicHttpBinding_IPOS_Echo;
} BasicHttpBinding_IPOSFunctionTable;

////////////////////////////////////////////////
// Global web service descriptions.
////////////////////////////////////////////////

typedef struct _fiskaltrust_interface_1_0_16298_1022_rc_wsdl
{
    struct // globalAttributes
    {
        // xml attribute: FactoryType ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WS_XML_QNAME
        // attributeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalAttributes.FactoryType
        WS_ATTRIBUTE_DESCRIPTION FactoryType;
        
        // xml attribute: Id ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WCHAR*
        // attributeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalAttributes.Id
        WS_ATTRIBUTE_DESCRIPTION Id;
        
        // xml attribute: Ref ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WCHAR*
        // attributeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalAttributes.Ref
        WS_ATTRIBUTE_DESCRIPTION Ref;
        
    } globalAttributes;
    struct // globalTypes
    {
        // xml type: ReceiptRequest ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ReceiptRequest
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ReceiptRequest
        WS_STRUCT_DESCRIPTION ReceiptRequest;
        
        // xml type: ArrayOfChargeItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ArrayOfChargeItem
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfChargeItem
        WS_STRUCT_DESCRIPTION ArrayOfChargeItem;
        
        // xml type: ChargeItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ChargeItem
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ChargeItem
        WS_STRUCT_DESCRIPTION ChargeItem;
        
        // xml type: ArrayOfPayItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ArrayOfPayItem
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfPayItem
        WS_STRUCT_DESCRIPTION ArrayOfPayItem;
        
        // xml type: PayItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: PayItem
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.PayItem
        WS_STRUCT_DESCRIPTION PayItem;
        
        // xml type: ReceiptResponse ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ReceiptResponse
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ReceiptResponse
        WS_STRUCT_DESCRIPTION ReceiptResponse;
        
        // xml type: ArrayOfSignaturItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ArrayOfSignaturItem
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfSignaturItem
        WS_STRUCT_DESCRIPTION ArrayOfSignaturItem;
        
        // xml type: SignaturItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: SignaturItem
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.SignaturItem
        WS_STRUCT_DESCRIPTION SignaturItem;
        
        // xml type: ArrayOfstring ("http://schemas.microsoft.com/2003/10/Serialization/Arrays")
        // c type: ArrayOfstring
        // WS_TYPE: WS_STRUCT_TYPE
        // typeDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalTypes.ArrayOfstring
        WS_STRUCT_DESCRIPTION ArrayOfstring;
        
    } globalTypes;
    struct // globalElements
    {
        // xml element: Sign ("http://tempuri.org/")
        // c type: _Sign
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Sign
        WS_ELEMENT_DESCRIPTION Sign;
        
        // xml element: SignResponse ("http://tempuri.org/")
        // c type: _SignResponse
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.SignResponse
        WS_ELEMENT_DESCRIPTION SignResponse;
        
        // xml element: Journal ("http://tempuri.org/")
        // c type: _Journal
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Journal
        WS_ELEMENT_DESCRIPTION Journal;
        
        // xml element: JournalResponse ("http://tempuri.org/")
        // c type: _JournalResponse
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.JournalResponse
        WS_ELEMENT_DESCRIPTION JournalResponse;
        
        // xml element: Echo ("http://tempuri.org/")
        // c type: _Echo
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Echo
        WS_ELEMENT_DESCRIPTION Echo;
        
        // xml element: EchoResponse ("http://tempuri.org/")
        // c type: _EchoResponse
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.EchoResponse
        WS_ELEMENT_DESCRIPTION EchoResponse;
        
        // xml element: anyType ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WS_XML_BUFFER*
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.anyType
        WS_ELEMENT_DESCRIPTION anyType;
        
        // xml element: anyURI ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WCHAR*
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.anyURI
        WS_ELEMENT_DESCRIPTION anyURI;
        
        // xml element: base64Binary ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WS_BYTES
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.base64Binary
        WS_ELEMENT_DESCRIPTION base64Binary;
        
        // xml element: boolean ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: BOOL
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Boolean
        WS_ELEMENT_DESCRIPTION Boolean;
        
        // xml element: byte ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: char
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Byte
        WS_ELEMENT_DESCRIPTION Byte;
        
        // xml element: dateTime ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WS_DATETIME
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.dateTime
        WS_ELEMENT_DESCRIPTION dateTime;
        
        // xml element: decimal ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: DECIMAL
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Decimal
        WS_ELEMENT_DESCRIPTION Decimal;
        
        // xml element: double ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: double
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Double
        WS_ELEMENT_DESCRIPTION Double;
        
        // xml element: float ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: float
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Float
        WS_ELEMENT_DESCRIPTION Float;
        
        // xml element: int ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: int
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Int
        WS_ELEMENT_DESCRIPTION Int;
        
        // xml element: long ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: __int64
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Long
        WS_ELEMENT_DESCRIPTION Long;
        
        // xml element: QName ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WS_XML_QNAME
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.QName
        WS_ELEMENT_DESCRIPTION QName;
        
        // xml element: short ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: short
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Short
        WS_ELEMENT_DESCRIPTION Short;
        
        // xml element: string ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WCHAR*
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.String
        WS_ELEMENT_DESCRIPTION String;
        
        // xml element: unsignedByte ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: unsigned char
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.unsignedByte
        WS_ELEMENT_DESCRIPTION unsignedByte;
        
        // xml element: unsignedInt ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: unsigned int
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.unsignedInt
        WS_ELEMENT_DESCRIPTION unsignedInt;
        
        // xml element: unsignedLong ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: unsigned __int64
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.unsignedLong
        WS_ELEMENT_DESCRIPTION unsignedLong;
        
        // xml element: unsignedShort ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: unsigned short
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.unsignedShort
        WS_ELEMENT_DESCRIPTION unsignedShort;
        
        // xml element: char ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: int
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.Char
        WS_ELEMENT_DESCRIPTION Char;
        
        // xml element: duration ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: WS_DURATION
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.duration
        WS_ELEMENT_DESCRIPTION duration;
        
        // xml element: guid ("http://schemas.microsoft.com/2003/10/Serialization/")
        // c type: GUID
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.guid
        WS_ELEMENT_DESCRIPTION guid;
        
        // xml element: ReceiptRequest ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ReceiptRequest
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.ReceiptRequest
        WS_ELEMENT_DESCRIPTION ReceiptRequest;
        
        // xml element: ArrayOfChargeItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ArrayOfChargeItem
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.ArrayOfChargeItem
        WS_ELEMENT_DESCRIPTION ArrayOfChargeItem;
        
        // xml element: ChargeItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ChargeItem
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.ChargeItem
        WS_ELEMENT_DESCRIPTION ChargeItem;
        
        // xml element: ArrayOfPayItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ArrayOfPayItem
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.ArrayOfPayItem
        WS_ELEMENT_DESCRIPTION ArrayOfPayItem;
        
        // xml element: PayItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: PayItem
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.PayItem
        WS_ELEMENT_DESCRIPTION PayItem;
        
        // xml element: ReceiptResponse ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ReceiptResponse
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.ReceiptResponse
        WS_ELEMENT_DESCRIPTION ReceiptResponse;
        
        // xml element: ArrayOfSignaturItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: ArrayOfSignaturItem
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.ArrayOfSignaturItem
        WS_ELEMENT_DESCRIPTION ArrayOfSignaturItem;
        
        // xml element: SignaturItem ("http://schemas.datacontract.org/2004/07/fiskaltrust.ifPOS.v0")
        // c type: SignaturItem
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.SignaturItem
        WS_ELEMENT_DESCRIPTION SignaturItem;
        
        // xml element: ArrayOfstring ("http://schemas.microsoft.com/2003/10/Serialization/Arrays")
        // c type: ArrayOfstring
        // elementDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.globalElements.ArrayOfstring
        WS_ELEMENT_DESCRIPTION ArrayOfstring;
        
    } globalElements;
    struct // externallyReferencedTypes
    {
        WS_STRUCT_DESCRIPTION Sign;
        WS_STRUCT_DESCRIPTION SignResponse;
        WS_STRUCT_DESCRIPTION Journal;
        WS_STRUCT_DESCRIPTION JournalResponse;
        WS_STRUCT_DESCRIPTION Echo;
        WS_STRUCT_DESCRIPTION EchoResponse;
    } externallyReferencedTypes;
    struct // messages
    {
        // message: IPOS_Sign_InputMessage
        // c type: _Sign
        // action: "http://tempuri.org/IPOS/Sign"
        // messageDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.messages.IPOS_Sign_InputMessage
        WS_MESSAGE_DESCRIPTION IPOS_Sign_InputMessage;
        
        // message: IPOS_Sign_OutputMessage
        // c type: _SignResponse
        // action: "http://tempuri.org/IPOS/SignResponse"
        // messageDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.messages.IPOS_Sign_OutputMessage
        WS_MESSAGE_DESCRIPTION IPOS_Sign_OutputMessage;
        
        // message: IPOS_Journal_InputMessage
        // c type: _Journal
        // action: "http://tempuri.org/IPOS/Journal"
        // messageDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.messages.IPOS_Journal_InputMessage
        WS_MESSAGE_DESCRIPTION IPOS_Journal_InputMessage;
        
        // message: IPOS_Journal_OutputMessage
        // c type: _JournalResponse
        // action: "http://tempuri.org/IPOS/JournalResponse"
        // messageDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.messages.IPOS_Journal_OutputMessage
        WS_MESSAGE_DESCRIPTION IPOS_Journal_OutputMessage;
        
        // message: IPOS_Echo_InputMessage
        // c type: _Echo
        // action: "http://tempuri.org/IPOS/Echo"
        // messageDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.messages.IPOS_Echo_InputMessage
        WS_MESSAGE_DESCRIPTION IPOS_Echo_InputMessage;
        
        // message: IPOS_Echo_OutputMessage
        // c type: _EchoResponse
        // action: "http://tempuri.org/IPOS/EchoResponse"
        // messageDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.messages.IPOS_Echo_OutputMessage
        WS_MESSAGE_DESCRIPTION IPOS_Echo_OutputMessage;
        
    } messages;
    struct // contracts
    {
        // binding: BasicHttpBinding_IPOS
        // portType: IPOS
        // operation: BasicHttpBinding_IPOS_Sign
        //     input message: IPOS_Sign_InputMessage
        //     output message: IPOS_Sign_OutputMessage
        // operation: BasicHttpBinding_IPOS_Journal
        //     input message: IPOS_Journal_InputMessage
        //     output message: IPOS_Journal_OutputMessage
        // operation: BasicHttpBinding_IPOS_Echo
        //     input message: IPOS_Echo_InputMessage
        //     output message: IPOS_Echo_OutputMessage
        // contractDescription: fiskaltrust_interface_1_0_16298_1022_rc_wsdl.contracts.BasicHttpBinding_IPOS
        WS_CONTRACT_DESCRIPTION BasicHttpBinding_IPOS;
        
    } contracts;
    struct // policies
    {
        // policy for binding: BasicHttpBinding_IPOS
        // port name: BasicHttpBinding_IPOS, binding: BasicHttpBinding_IPOS, namespace: http://tempuri.org/
        WS_HTTP_POLICY_DESCRIPTION BasicHttpBinding_IPOS;
    } policies;
} _fiskaltrust_interface_1_0_16298_1022_rc_wsdl;

extern const _fiskaltrust_interface_1_0_16298_1022_rc_wsdl fiskaltrust_interface_1_0_16298_1022_rc_wsdl;

#ifdef __cplusplus
}
#endif

