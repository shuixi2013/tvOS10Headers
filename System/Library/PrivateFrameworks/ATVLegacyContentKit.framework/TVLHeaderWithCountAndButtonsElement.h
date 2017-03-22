/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLHeaderElement.h>

@class NSArray;

@interface TVLHeaderWithCountAndButtonsElement : TVLHeaderElement {

	unsigned long long _count;
	NSArray* _buttons;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                     //@synthesize buttons=_buttons - In the implementation block
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

