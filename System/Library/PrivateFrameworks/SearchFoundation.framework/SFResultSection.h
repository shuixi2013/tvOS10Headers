/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SFResultSection : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _results;
	unsigned long long _maxInitiallyVisibleResults;
	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _moreText;
	double _rankingScore;

}

@property (nonatomic,retain) NSArray * results;                                          //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long maxInitiallyVisibleResults;              //@synthesize maxInitiallyVisibleResults=_maxInitiallyVisibleResults - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * moreText;                                          //@synthesize moreText=_moreText - In the implementation block
@property (assign,nonatomic) double rankingScore;                                        //@synthesize rankingScore=_rankingScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(double)rankingScore;
-(void)setRankingScore:(double)arg1 ;
-(NSString *)moreText;
-(void)setMoreText:(NSString *)arg1 ;
-(unsigned long long)maxInitiallyVisibleResults;
-(void)setMaxInitiallyVisibleResults:(unsigned long long)arg1 ;
@end

