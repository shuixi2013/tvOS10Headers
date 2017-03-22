/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVAssetResourceLoaderDelegate.h>

@class NSString, NSData, NSURL;

@interface EncryptedKeyLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	NSString* _keyServerURL;
	NSString* _certURL;
	NSData* _appCert;
	NSURL* persistentKeySaveDestination;

}

@property (nonatomic,retain) NSURL * persistentKeySaveDestination; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)initWithKeyServerURL:(id)arg1 certURL:(id)arg2 ;
-(NSURL *)persistentKeySaveDestination;
-(void)_prepareAndSendStreamingKeyRequest:(id)arg1 ;
-(BOOL)_willLoadOrRenewRequestedResource:(id)arg1 ;
-(void)setPersistentKeySaveDestination:(NSURL *)arg1 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2 ;
@end
