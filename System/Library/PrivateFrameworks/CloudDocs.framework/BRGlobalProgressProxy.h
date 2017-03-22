/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRProgressProxy.h>
#import <libobjc.A.dylib/BRProgressProxyDelegate.h>

@class NSString;

@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate> {

	NSString* _kind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2 ;
-(id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2 ;
-(id)initWithGlobalProgressKind:(id)arg1 ;
@end

