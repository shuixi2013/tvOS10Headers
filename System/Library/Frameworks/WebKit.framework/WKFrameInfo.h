/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _WKFrameHandle, NSURLRequest, WKSecurityOrigin, NSString;

@interface WKFrameInfo : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::FrameInfo> _frameInfo;

}

@property (nonatomic,readonly) _WKFrameHandle * _handle; 
@property (getter=isMainFrame,nonatomic,readonly) BOOL mainFrame; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (nonatomic,readonly) WKSecurityOrigin * securityOrigin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSURLRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isMainFrame;
-(Object*)_apiObject;
-(WKSecurityOrigin *)securityOrigin;
-(_WKFrameHandle *)_handle;
@end

