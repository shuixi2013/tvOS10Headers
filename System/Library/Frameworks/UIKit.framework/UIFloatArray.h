/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIFloatArray : NSObject {

	int _count;
	int _gapCount;
	int* _gaps;
	float _gapValue;
	float _minValue;
	SCD_Union_UI27* _values;
	struct {
		unsigned valueIsSingleton : 1;
		unsigned hideGaps : 1;
		unsigned unused : 30;
	}  _floatArrayFlags;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_setupValuesWithCount:(int)arg1 singleValue:(float)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_setupValuesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_setupGapIndexesWithCount:(int)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3 ;
-(BOOL)_setupWithDataProvider:(id)arg1 valueIsSingleton:(BOOL)arg2 singletonValue:(float)arg3 isRefresh:(BOOL)arg4 ;
-(SCD_Struct_UI28)_indexesViaSingletonFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(SCD_Struct_UI28)_indexesViaArrayFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(BOOL)refreshWithDataProvider:(id)arg1 singleValue:(float)arg2 ;
-(BOOL)refreshWithDataProvider:(id)arg1 ;
-(float)singleValue;
-(float)minValue;
-(int)valueCount;
-(float)sum;
-(SCD_Union_UI27)offsetsForIndex:(int)arg1 ;
-(SCD_Union_UI27)offsetsForGapIndex:(int)arg1 ;
-(SCD_Struct_UI28)indexesFromOffset:(float)arg1 toOffset:(float)arg2 ;
-(int)indexForGapIndex:(int)arg1 ;
-(void)hideGaps:(BOOL)arg1 ;
@end

