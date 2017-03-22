/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable;

@interface UIWebGeolocationPolicyDecider : NSObject {

	NSMutableDictionary* _sites;
	NSMutableArray* _challenges;
	NSMapTable* _activeChallenges;

}
+(void)initialize;
+(id)sharedPolicyDecider;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg2 ;
-(id)_siteFile;
-(void)clearCache;
-(BOOL)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3 ;
-(void)_save;
-(long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2 ;
-(void)_load;
-(void)_executeNextChallenge;
-(void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
-(void)clearAllCaches;
-(void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
@end

