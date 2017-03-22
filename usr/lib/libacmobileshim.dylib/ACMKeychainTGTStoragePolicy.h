/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACCSSOTGTStoragePolicy.h>

@class NSString;

@interface ACMKeychainTGTStoragePolicy : NSObject <ACCSSOTGTStoragePolicy> {

	BOOL _useSharedStorage;
	NSString* _service;

}

@property (nonatomic,readonly) id<ACFKeychainManagerProtocol> keychainManager; 
@property (assign,nonatomic) BOOL useSharedStorage;                                         //@synthesize useSharedStorage=_useSharedStorage - In the implementation block
@property (nonatomic,retain) NSString * service;                                            //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setService:(NSString *)arg1 ;
-(NSString *)service;
-(id<ACFKeychainManagerProtocol>)keychainManager;
-(BOOL)performStoreToken:(id)arg1 withService:(id)arg2 ;
-(id)allTokensWithPrincipal:(id)arg1 ;
-(id)allTokensWithPrincipal:(id)arg1 service:(id)arg2 ;
-(id)ssoTokenWithKeychainInfo:(id)arg1 realm:(id)arg2 ;
-(BOOL)useSharedStorage;
-(id)dictionaryWithSSOToken:(id)arg1 ;
-(id)searchTokenWithPrincipal:(id)arg1 ;
-(BOOL)storeToken:(id)arg1 ;
-(BOOL)updateToken:(id)arg1 ;
-(BOOL)removeTokenWithPrincipal:(id)arg1 ;
-(void)setUseSharedStorage:(BOOL)arg1 ;
-(int)storeItemWithInfo:(id)arg1 ;
-(id)tokenDataWithDictionary:(id)arg1 ;
-(id)tokenDictionaryWithData:(id)arg1 ;
-(BOOL)performRemoveTokenWithPrincipal:(id)arg1 service:(id)arg2 ;
-(id)searchItemWithInfo:(id)arg1 ;
@end

