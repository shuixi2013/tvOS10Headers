/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeErrorRange : RWIProtocolJSONObject

@property (assign,nonatomic) int startOffset; 
@property (assign,nonatomic) int endOffset; 
-(int)endOffset;
-(int)startOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)setEndOffset:(int)arg1 ;
-(id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 ;
@end
