/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDSecureBackupProxy.h>

@class NSString;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)enableWithInfo:(id)arg1 ;
-(void)recoverWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_secureBackup;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)backOffDateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setBackOffDateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)accountInfoWithInfo:(id)arg1 error:(id*)arg2 ;
@end

