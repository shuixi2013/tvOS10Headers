/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInput/TextInput-Structs.h>
@class NSString;

@interface TIWordTokenizer : NSObject {

	NSString* m_string;
	SCD_Struct_TI12* m_inlineBuffer;
	NSRange m_tokenRange;
	NSRange m_searchRange;
	unsigned long long m_bufferOffset;

}
-(NSRange)rangeOfCurrentToken;
-(void)dealloc;
-(id)init;
-(id)allTokensForString:(id)arg1 ;
-(NSRange)advanceToNextToken;
-(void)setString:(id)arg1 withSearchRange:(NSRange)arg2 ;
@end

