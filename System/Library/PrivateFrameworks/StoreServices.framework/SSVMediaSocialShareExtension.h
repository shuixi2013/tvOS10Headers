/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection, NSString;

@interface SSVMediaSocialShareExtension : NSObject {

	SSXPCConnection* _connection;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier; 
-(NSString *)extensionIdentifier;
-(void)getVisibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)init;
@end

