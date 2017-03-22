/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSection.h>

@class NSString, NSArray;

@interface SFTextColumnsCardSection : SFCardSection {

	NSString* _title;
	long long _titleWeight;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long titleWeight;              //@synthesize titleWeight=_titleWeight - In the implementation block
@property (nonatomic,copy) NSArray * columns;                    //@synthesize columns=_columns - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setTitleWeight:(long long)arg1 ;
-(long long)titleWeight;
@end

