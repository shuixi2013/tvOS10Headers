/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface RadioRecentStationsResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
@property (nonatomic,copy,readonly) NSArray * stationGroups; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)stationGroups;
-(NSArray *)stationDictionaries;
@end

