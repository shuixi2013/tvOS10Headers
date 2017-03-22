/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVContentItem.h>

@class NSDictionary, NSDate;

@interface TVSStoreFavoriteItem : TVContentItem {

	NSDictionary* _dictionary;
	NSDate* _dateForSorting;

}

@property (nonatomic,copy) NSDictionary * dictionary;                   //@synthesize dictionary=_dictionary - In the implementation block
@property (assign,nonatomic) unsigned long long userOrder; 
@property (nonatomic,copy) NSDate * dateForSorting;                     //@synthesize dateForSorting=_dateForSorting - In the implementation block
-(id)description;
-(NSDictionary *)dictionary;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)userOrder;
-(NSDate *)dateForSorting;
-(void)setUserOrder:(unsigned long long)arg1 ;
-(void)setDateForSorting:(NSDate *)arg1 ;
@end

