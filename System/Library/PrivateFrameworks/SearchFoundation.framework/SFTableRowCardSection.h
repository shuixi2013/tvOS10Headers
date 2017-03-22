/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSection.h>

@class NSString, SFTableAlignmentSchema, NSArray;

@interface SFTableRowCardSection : SFCardSection {

	BOOL _isSubHeader;
	BOOL _reducedRowHeight;
	BOOL _alignRowsToHeader;
	NSString* _tableIdentifier;
	SFTableAlignmentSchema* _alignmentSchema;
	NSArray* _data;
	NSString* _tabGroupIdentifier;
	long long _verticalAlign;

}

@property (nonatomic,copy) NSString * tableIdentifier;                              //@synthesize tableIdentifier=_tableIdentifier - In the implementation block
@property (nonatomic,retain) SFTableAlignmentSchema * alignmentSchema;              //@synthesize alignmentSchema=_alignmentSchema - In the implementation block
@property (nonatomic,copy) NSArray * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) BOOL isSubHeader;                                      //@synthesize isSubHeader=_isSubHeader - In the implementation block
@property (nonatomic,copy) NSString * tabGroupIdentifier;                           //@synthesize tabGroupIdentifier=_tabGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL reducedRowHeight;                                 //@synthesize reducedRowHeight=_reducedRowHeight - In the implementation block
@property (assign,nonatomic) long long verticalAlign;                               //@synthesize verticalAlign=_verticalAlign - In the implementation block
@property (assign,nonatomic) BOOL alignRowsToHeader;                                //@synthesize alignRowsToHeader=_alignRowsToHeader - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)verticalAlign;
-(void)setVerticalAlign:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(void)setIsSubHeader:(BOOL)arg1 ;
-(void)setTableIdentifier:(NSString *)arg1 ;
-(void)setAlignmentSchema:(SFTableAlignmentSchema *)arg1 ;
-(void)setTabGroupIdentifier:(NSString *)arg1 ;
-(void)setReducedRowHeight:(BOOL)arg1 ;
-(void)setAlignRowsToHeader:(BOOL)arg1 ;
-(NSString *)tableIdentifier;
-(SFTableAlignmentSchema *)alignmentSchema;
-(BOOL)isSubHeader;
-(NSString *)tabGroupIdentifier;
-(BOOL)reducedRowHeight;
-(BOOL)alignRowsToHeader;
@end
