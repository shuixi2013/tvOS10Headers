/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@interface RangeDataManager : NSObject
+(void)ranges:(id)arg1 addRange:(SCD_Struct_Ra23)arg2 forKey:(id)arg3 ;
+(id)collapseRanges:(id)arg1 ;
+(id)unionOfRangeLists:(id)arg1 ;
+(id)intersectionOfRanges1:(id)arg1 ranges2:(id)arg2 ;
+(id)unionOfRanges1:(id)arg1 ranges2:(id)arg2 ;
+(id)intersectionOfRangeLists:(id)arg1 ;
+(id)stringForRanges:(id)arg1 ;
+(void)unionOfRangeLists:(id)arg1 interleavedIntoList1:(id*)arg2 andList2:(id*)arg3 ;
+(id)invertedRanges:(id)arg1 duration:(long long)arg2 ;
+(BOOL)location:(long long)arg1 isInRanges:(id)arg2 foundRange:(SCD_Struct_Ra23*)arg3 ;
@end

