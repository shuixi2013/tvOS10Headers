/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSObject;

@interface CNStringTokenizer : NSObject {

	CFStringTokenizerRef _tokenizer;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,readonly) CFStringTokenizerRef tokenizer;                      //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
+(id)tokenizeString:(id)arg1 ;
+(id)adjustRanges:(id)arg1 toIncludeNonBreakingCharactersInString:(id)arg2 ;
+(BOOL)isCharacterNonBreaking:(unsigned short)arg1 ;
-(void)dealloc;
-(id)init;
-(CFStringTokenizerRef)tokenizer;
-(id)tokenizeString:(id)arg1 ;
-(id)rangesOfWordTokensInString:(id)arg1 ;
-(id)rangesOfWordUnitTokensInString:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)initWithLocale:(id)arg1 ;
@end
