/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMDOMTokenList : DOMObject

@property (readonly) unsigned length; 
@property (copy) NSString * value; 
-(BOOL)toggle:(id)arg1 force:(BOOL)arg2 ;
-(void)dealloc;
-(unsigned)length;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)item:(unsigned)arg1 ;
-(BOOL)contains:(id)arg1 ;
@end

