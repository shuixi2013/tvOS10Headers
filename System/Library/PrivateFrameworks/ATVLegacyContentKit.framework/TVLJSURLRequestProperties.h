/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class SSMutableURLRequestProperties;

@interface TVLJSURLRequestProperties : NSObject {

	OpaqueJSValueRef _jsObjectRef;
	SSMutableURLRequestProperties* _requestProperties;

}

@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef;                                   //@synthesize jsObjectRef=_jsObjectRef - In the implementation block
@property (nonatomic,retain) SSMutableURLRequestProperties * requestProperties;              //@synthesize requestProperties=_requestProperties - In the implementation block
-(void)dealloc;
-(void)setRequestProperties:(SSMutableURLRequestProperties *)arg1 ;
-(SSMutableURLRequestProperties *)requestProperties;
-(OpaqueJSValueRef)jsObjectRef;
-(id)initWithContext:(OpaqueJSContextRef)arg1 requestProperties:(id)arg2 ;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
@end

