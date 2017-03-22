/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitSystem;
@class MKMapItem, MKTransitSectionPagingFilter, NSSet, NSDate;

@interface MKTransitSectionController : NSObject {

	MKMapItem* _mapItem;
	MKTransitSectionPagingFilter* __pagingFilter;
	NSSet* _linesToShow;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfFilteredRows;
	unsigned long long _numberOfFilteredLines;
	BOOL _needsBuildRows;
	id<GEOTransitSystem> _system;
	NSDate* _departureCutoffDate;
	NSDate* _expiredHighFrequencyCutoffDate;
	NSSet* _incidentEntitiesToExclude;

}

@property (nonatomic,readonly) id<GEOTransitSystem> system;                               //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * expiredHighFrequencyCutoffDate;                     //@synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate - In the implementation block
@property (nonatomic,retain) NSSet * incidentEntitiesToExclude;                           //@synthesize incidentEntitiesToExclude=_incidentEntitiesToExclude - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilteredLines;                  //@synthesize numberOfFilteredLines=_numberOfFilteredLines - In the implementation block
@property (nonatomic,readonly) MKTransitSectionPagingFilter * _pagingFilter;              //@synthesize _pagingFilter=__pagingFilter - In the implementation block
-(id)init;
-(id<GEOTransitSystem>)system;
-(unsigned long long)numberOfRows;
-(BOOL)_needsBuildRows;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 ;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(void)setIncidentEntitiesToExclude:(NSSet *)arg1 ;
-(void)incrementPagingFilter;
-(BOOL)hasFilteredRows;
-(BOOL)hasFilteredLines;
-(id)linesToShow;
-(void)_setNeedsBuildRows;
-(void)_buildRows;
-(NSDate *)departureCutoffDate;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(NSSet *)incidentEntitiesToExclude;
-(unsigned long long)numberOfFilteredLines;
-(MKTransitSectionPagingFilter *)_pagingFilter;
@end

