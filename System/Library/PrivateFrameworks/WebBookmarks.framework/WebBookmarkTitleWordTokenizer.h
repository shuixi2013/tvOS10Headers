/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebBookmarks/WebBookmarks-Structs.h>
@class NSString, TIWordTokenizer;

@interface WebBookmarkTitleWordTokenizer : NSObject {

	NSString* _string;
	unsigned long long _stringLength;
	TIWordTokenizer* _wordTokenizer;
	NSRange _rangeOfNextToken;
	unsigned long long _startOfUnclassifiedRangeBeforeNextToken;

}
+(void)initialize;
-(id)init;
-(void)setString:(id)arg1 ;
-(NSRange)advanceToNextToken;
@end

