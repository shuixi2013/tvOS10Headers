/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _INVocabularyValidator : NSObject
+(void)load;
-(void)determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)maximumNumberOfVocabularyStringsForType:(long long)arg1 ;
-(id)_pluginKitCompatiblePathFromPath:(id)arg1 ;
-(id)_intentsUsingVocabularyType:(long long)arg1 ;
-(void)_confirmExistenceOfWatchAppForCompanionBundleID:(id)arg1 handlingIntents:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_bundleID:(id)arg1 isWhitelistedForVocabularyType:(long long)arg2 ;
-(void)_determineIfBundle:(id)arg1 canProvideVocabularyOfType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)validatedItemsFromVocabularyStrings:(id)arg1 ofType:(long long)arg2 loggingWarnings:(BOOL)arg3 ;
@end

