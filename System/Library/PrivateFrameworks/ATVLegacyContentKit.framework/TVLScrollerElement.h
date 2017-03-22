/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class TVLHeaderElement, NSArray;

@interface TVLScrollerElement : TVLRootElement {

	BOOL _fixedHeader;
	TVLHeaderElement* _header;
	NSArray* _scrollerItems;

}

@property (nonatomic,retain) TVLHeaderElement * header;              //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) BOOL fixedHeader;                       //@synthesize fixedHeader=_fixedHeader - In the implementation block
@property (nonatomic,retain) NSArray * scrollerItems;                //@synthesize scrollerItems=_scrollerItems - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(TVLHeaderElement *)header;
-(void)setHeader:(TVLHeaderElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(NSArray *)scrollerItems;
-(BOOL)fixedHeader;
-(void)setFixedHeader:(BOOL)arg1 ;
-(void)setScrollerItems:(NSArray *)arg1 ;
@end

