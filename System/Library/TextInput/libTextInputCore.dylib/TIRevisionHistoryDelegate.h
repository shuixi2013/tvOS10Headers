/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:04 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIRevisionHistoryDelegate <NSObject>
@required
-(void)incrementUnigramCount:(id)arg1 tokenID:(TITokenID)arg2 usageFlags:(unsigned)arg3;
-(void)decrementUnigramCount:(id)arg1 tokenID:(TITokenID)arg2 usageFlags:(unsigned)arg3;
-(void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)arg1 autocorrectionTypes:(unsigned)arg2;
-(void)incrementLanguageModelCount:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4 saveToDifferentialPrivacy:(BOOL)arg5;
-(void)decrementLanguageModelCount:(id)arg1 tokenID:(TITokenID)arg2 context:(const TITokenID*)arg3 contextLength:(unsigned long long)arg4;
-(TITokenID*)findTokenIDForWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned)arg4 surfaceFormPtr:(id*)arg5 hasCaseInsensitiveStaticVariant:(BOOL*)arg6;
-(TITokenID*)findTokenIDForWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 tokenLookupMode:(unsigned)arg4;
-(TITokenID*)addWord:(id)arg1 context:(const TITokenID*)arg2 contextLength:(unsigned long long)arg3 surfaceFormPtr:(id*)arg4;

@end

