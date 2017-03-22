/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNFuture;

@interface CNAutocompleteInputStringTokenizer : NSObject {

	CNFuture* _nameStringTokenizer;

}

@property (retain) CNFuture * nameStringTokenizer;              //@synthesize nameStringTokenizer=_nameStringTokenizer - In the implementation block
+(id)tokensFromString:(id)arg1 ;
+(id)lazyNameStringTokenizerWithLocale:(id)arg1 ;
-(id)init;
-(id)tokensFromString:(id)arg1 ;
-(void)setNameStringTokenizer:(CNFuture *)arg1 ;
-(/*^block*/id)expandCJKNames;
-(CNFuture *)nameStringTokenizer;
-(id)initWithLocale:(id)arg1 ;
@end
