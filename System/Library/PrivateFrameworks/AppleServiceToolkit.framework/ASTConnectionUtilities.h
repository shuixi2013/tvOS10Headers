/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASTConnectionUtilities : NSObject
+(id)serverURL;
+(unsigned long long)rootOfTrust;
+(id)parseJSONResponseWithData:(id)arg1 error:(id*)arg2 ;
+(BOOL)isValidResponse:(id)arg1 ;
+(BOOL)didEncounterNetworkDisconnectionError:(id)arg1 ;
+(BOOL)trustIsValidWithProtectionSpace:(id)arg1 rootOfTrust:(unsigned long long)arg2 ;
+(id)MD5HeaderValueForTask:(id)arg1 ;
+(id)MD5ForFileURL:(id)arg1 ;
+(unsigned long long)serverSelection;
+(id)customServerEntry;
+(id)postRequestForEndpoint:(id)arg1 sessionID:(id)arg2 timeout:(double)arg3 ;
+(void)addStandardHeadersToRequest:(id)arg1 sessionID:(id)arg2 ;
+(BOOL)useChunkedTransferEncoding;
+(id)acceptLanguage;
+(id)getServerLoggingSelection;
+(id)jsonSerializeObject:(id)arg1 error:(id*)arg2 ;
+(id)MD5ForData:(id)arg1 ;
+(id)uuidHashFromString:(id)arg1 ;
+(BOOL)relaxTimeouts;
+(id)postRequestForEndpoint:(id)arg1 sessionID:(id)arg2 ;
+(id)postRequestForEndpoint:(id)arg1 fileURL:(id)arg2 fileSequence:(id)arg3 totalFiles:(id)arg4 sessionID:(id)arg5 ;
+(id)getRequestForEndpoint:(id)arg1 sessionID:(id)arg2 ;
+(void)addBodyToRequest:(id)arg1 body:(id)arg2 gzip:(BOOL)arg3 ;
+(BOOL)isGzipEnabled;
@end

