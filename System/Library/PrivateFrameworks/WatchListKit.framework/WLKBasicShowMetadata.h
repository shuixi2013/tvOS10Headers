/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:10:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class WLKShowContentRating, NSDate, NSArray, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {

	WLKShowContentRating* _contentRating;
	NSDate* _releaseDate;
	NSDate* _finaleDate;
	NSArray* _genres;
	NSString* _network;

}

@property (nonatomic,readonly) WLKShowContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,readonly) NSDate * releaseDate;                              //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSDate * finaleDate;                               //@synthesize finaleDate=_finaleDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * genres;                             //@synthesize genres=_genres - In the implementation block
@property (nonatomic,copy,readonly) NSString * network;                           //@synthesize network=_network - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(WLKShowContentRating *)contentRating;
-(NSArray *)genres;
-(NSDate *)releaseDate;
-(NSString *)network;
-(NSDate *)finaleDate;
@end

