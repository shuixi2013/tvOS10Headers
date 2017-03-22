/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface StocksWatchPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned long long _textDirection;

}

@property (assign,nonatomic,__weak) NSString * defaultStockSymbol; 
@property (assign,nonatomic) long long complicationDisplayMode; 
+(void)initialize;
+(id)sharedPreferences;
-(void)dealloc;
-(id)init;
-(void)reactivateWatchNPSAccessor;
-(void)syncKey:(id)arg1 ;
-(NSString *)defaultStockSymbol;
-(void)setDefaultStockSymbol:(NSString *)arg1 ;
-(long long)complicationDisplayMode;
-(void)setComplicationDisplayMode:(long long)arg1 ;
-(void)syncSelectedStock;
-(void)syncStocksList;
-(void)syncChartInterval;
-(void)syncRowDataType;
@end

