/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIReedSolomon : NSObject {

	int _expTable[256];
	int _logTable[256];
	int _cachedGeneratorNum;
	int _memoryCapacity;
	SCD_Struct_CI37* _cachedGenerators;

}
-(SCD_Struct_CI37*)divide:(SCD_Struct_CI37*)arg1 by:(SCD_Struct_CI37*)arg2 ;
-(id)initReedSolomon;
-(BOOL)encode:(int*)arg1 length:(int)arg2 bytes:(int)arg3 ;
-(BOOL)fillPoly:(SCD_Struct_CI37*)arg1 coefficients:(int*)arg2 length:(int)arg3 ;
-(void)clearPoly:(SCD_Struct_CI37*)arg1 ;
-(BOOL)isZero:(SCD_Struct_CI37*)arg1 ;
-(SCD_Struct_CI37*)copyPoly:(SCD_Struct_CI37*)arg1 ;
-(int)addOrSubtract:(int)arg1 with:(int)arg2 ;
-(int)multiply:(int)arg1 with:(int)arg2 ;
-(int)Degree:(SCD_Struct_CI37*)arg1 ;
-(int)polyCoefficient:(SCD_Struct_CI37*)arg1 degree:(int)arg2 ;
-(int)inverse:(int)arg1 ;
-(SCD_Struct_CI37*)multiplyByMonomial:(SCD_Struct_CI37*)arg1 degree:(int)arg2 coefficient:(int)arg3 ;
-(SCD_Struct_CI37*)addOrSubtractPoly:(SCD_Struct_CI37*)arg1 with:(SCD_Struct_CI37*)arg2 ;
-(int)Exp:(int)arg1 ;
-(SCD_Struct_CI37*)multiplyPoly:(SCD_Struct_CI37*)arg1 with:(SCD_Struct_CI37*)arg2 ;
-(SCD_Struct_CI37*)buildGenerator:(int)arg1 ;
-(SCD_Struct_CI37*)createMonomial:(int)arg1 coefficient:(int)arg2 ;
-(int*)coefficients:(SCD_Struct_CI37*)arg1 ;
-(void)dealloc;
@end

