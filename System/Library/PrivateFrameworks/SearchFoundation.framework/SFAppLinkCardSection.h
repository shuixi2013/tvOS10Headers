/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFTitleCardSection.h>

@class NSArray;

@interface SFAppLinkCardSection : SFTitleCardSection {

	NSArray* _appLinks;

}

@property (nonatomic,copy) NSArray * appLinks;              //@synthesize appLinks=_appLinks - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAppLinks:(NSArray *)arg1 ;
-(NSArray *)appLinks;
@end

