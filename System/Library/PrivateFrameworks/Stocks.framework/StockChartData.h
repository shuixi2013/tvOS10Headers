/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class NSMutableDictionary, Stock, NSArray, NSDate, NSTimeZone, NSDictionary;

@interface StockChartData : NSObject {

	NSMutableDictionary* _imageSetCache;
	NSMutableDictionary* _yAxisLabelInfoCache;
	NSMutableDictionary* _xAxisLabelInfoCache;
	NSMutableDictionary* _labelPlacementCache;
	BOOL _isUnavailable;
	BOOL _hasVolume;
	unsigned _stockValueCount;
	float _previousClosePrice;
	int _yAxisFractionDigits;
	Stock* _stock;
	long long _chartInterval;
	SCD_Struct_St0* _stockValues;
	NSArray* _interestingIndexes;
	NSDate* _marketOpenDate;
	NSDate* _marketCloseDate;
	NSTimeZone* _marketTimeZone;
	SCD_Struct_St0* _minValue;
	SCD_Struct_St0* _maxValue;
	double _expirationTime;
	NSDictionary* _dataSeriesDict;

}

@property (assign,nonatomic,__weak) Stock * stock;                       //@synthesize stock=_stock - In the implementation block
@property (assign,nonatomic) long long chartInterval;                    //@synthesize chartInterval=_chartInterval - In the implementation block
@property (readonly) SCD_Struct_St0* stockValues;                        //@synthesize stockValues=_stockValues - In the implementation block
@property (readonly) unsigned stockValueCount;                           //@synthesize stockValueCount=_stockValueCount - In the implementation block
@property (nonatomic,retain) NSArray * interestingIndexes;               //@synthesize interestingIndexes=_interestingIndexes - In the implementation block
@property (nonatomic,retain) NSDate * marketOpenDate;                    //@synthesize marketOpenDate=_marketOpenDate - In the implementation block
@property (nonatomic,retain) NSDate * marketCloseDate;                   //@synthesize marketCloseDate=_marketCloseDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * marketTimeZone;                //@synthesize marketTimeZone=_marketTimeZone - In the implementation block
@property (assign,nonatomic) SCD_Struct_St0* minValue;                   //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_St0* maxValue;                   //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) float previousClosePrice;                   //@synthesize previousClosePrice=_previousClosePrice - In the implementation block
@property (assign,nonatomic) double expirationTime;                      //@synthesize expirationTime=_expirationTime - In the implementation block
@property (assign,nonatomic) BOOL isUnavailable;                         //@synthesize isUnavailable=_isUnavailable - In the implementation block
@property (assign,nonatomic) BOOL hasVolume;                             //@synthesize hasVolume=_hasVolume - In the implementation block
@property (assign,nonatomic) int yAxisFractionDigits;                    //@synthesize yAxisFractionDigits=_yAxisFractionDigits - In the implementation block
@property (nonatomic,retain) NSDictionary * dataSeriesDict;              //@synthesize dataSeriesDict=_dataSeriesDict - In the implementation block
-(void)dealloc;
-(id)description;
-(SCD_Struct_St0*)minValue;
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(void)setMaxValue:(SCD_Struct_St0*)arg1 ;
-(BOOL)isUnavailable;
-(SCD_Struct_St0*)maxValue;
-(void)setMinValue:(SCD_Struct_St0*)arg1 ;
-(void)setStock:(Stock *)arg1 ;
-(Stock *)stock;
-(id)initWithStock:(id)arg1 interval:(long long)arg2 ;
-(SCD_Struct_St0*)allocateStockValuesWithCount:(unsigned)arg1 ;
-(id)imageSetForDisplayMode:(id)arg1 ;
-(void)setImageSet:(id)arg1 forDisplayMode:(id)arg2 ;
-(void)clearAllImageSets;
-(id)yAxisLabelInfoArrayForMode:(id)arg1 ;
-(void)setYAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2 ;
-(id)xAxisLabelInfoArrayForMode:(id)arg1 ;
-(void)setXAxisLabelInfoArray:(id)arg1 forDisplayMode:(id)arg2 ;
-(long long)labelPlacementForDisplayMode:(id)arg1 ;
-(void)setLabelPlacement:(long long)arg1 forDisplayMode:(id)arg2 ;
-(long long)chartInterval;
-(void)setChartInterval:(long long)arg1 ;
-(SCD_Struct_St0*)stockValues;
-(unsigned)stockValueCount;
-(NSArray *)interestingIndexes;
-(void)setInterestingIndexes:(NSArray *)arg1 ;
-(NSDate *)marketOpenDate;
-(void)setMarketOpenDate:(NSDate *)arg1 ;
-(NSDate *)marketCloseDate;
-(void)setMarketCloseDate:(NSDate *)arg1 ;
-(NSTimeZone *)marketTimeZone;
-(void)setMarketTimeZone:(NSTimeZone *)arg1 ;
-(float)previousClosePrice;
-(void)setPreviousClosePrice:(float)arg1 ;
-(void)setIsUnavailable:(BOOL)arg1 ;
-(BOOL)hasVolume;
-(void)setHasVolume:(BOOL)arg1 ;
-(int)yAxisFractionDigits;
-(void)setYAxisFractionDigits:(int)arg1 ;
-(NSDictionary *)dataSeriesDict;
-(void)setDataSeriesDict:(NSDictionary *)arg1 ;
@end

