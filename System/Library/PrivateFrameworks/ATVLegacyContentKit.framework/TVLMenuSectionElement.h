/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLHeaderElement, NSArray;

@interface TVLMenuSectionElement : TVLElement {

	TVLHeaderElement* _header;
	NSArray* _menuItems;

}

@property (nonatomic,retain) TVLHeaderElement * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                    //@synthesize menuItems=_menuItems - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(TVLHeaderElement *)header;
-(void)setHeader:(TVLHeaderElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

