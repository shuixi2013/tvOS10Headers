/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject {

	BOOL _isContinuation;
	BOOL _suffixWhenPrefixOnly;
	NSString* _namePrefix;
	NSArray* _sortedNames;
	NSString* _nameSuffix;

}

@property (nonatomic,copy) NSString * namePrefix;                                      //@synthesize namePrefix=_namePrefix - In the implementation block
@property (nonatomic,copy) NSArray * sortedNames;                                      //@synthesize sortedNames=_sortedNames - In the implementation block
@property (nonatomic,copy) NSString * nameSuffix;                                      //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (assign,nonatomic) BOOL isContinuation;                                      //@synthesize isContinuation=_isContinuation - In the implementation block
@property (assign,nonatomic) BOOL suffixWhenPrefixOnly;                                //@synthesize suffixWhenPrefixOnly=_suffixWhenPrefixOnly - In the implementation block
@property (nonatomic,copy,readonly) NSArray * localizedSortedNames; 
@property (nonatomic,copy,readonly) NSString * localizedTitleForNameInfo; 
+(id)_localizedNameForName:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)sortedNames;
-(id)dictionaryForInfo;
-(void)setSortedNames:(NSArray *)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)localizedTitleForNameInfo;
-(void)setIsContinuation:(BOOL)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(void)setSuffixWhenPrefixOnly:(BOOL)arg1 ;
-(NSArray *)localizedSortedNames;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(BOOL)isContinuation;
-(BOOL)suffixWhenPrefixOnly;
@end

