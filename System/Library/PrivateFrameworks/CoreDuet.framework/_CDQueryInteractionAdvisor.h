/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CDInteractionStore;

@interface _CDQueryInteractionAdvisor : NSObject {

	_CDInteractionStore* _store;

}

@property (retain) _CDInteractionStore * store;              //@synthesize store=_store - In the implementation block
-(id)adviseInteractionsForKeywordsInString:(id)arg1 usingSettings:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(void)setStore:(_CDInteractionStore *)arg1 ;
-(_CDInteractionStore *)store;
@end

