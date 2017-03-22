/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MXExtensionBaseContext.h>
#import <libobjc.A.dylib/_MXExtensionHostContextProtocol.h>

@protocol _MXExtensionVendorXPCProtocol;
@class NSString;

@interface _MXExtensionHostContext : _MXExtensionBaseContext <_MXExtensionHostContextProtocol> {

	id<_MXExtensionVendorXPCProtocol> _vendorProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id connectionDelegate; 
-(id)vendorContext;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)connectVendorProxyWithProtocol:(id)arg1 ;
@end

