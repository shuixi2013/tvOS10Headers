/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DKObjectMOConverter : NSObject {

	BOOL _readMetadata;
	BOOL _deduplicateValues;

}

@property (assign) BOOL readMetadata;                   //@synthesize readMetadata=_readMetadata - In the implementation block
@property (assign) BOOL deduplicateValues;              //@synthesize deduplicateValues=_deduplicateValues - In the implementation block
-(id)init;
-(void)setReadMetadata:(BOOL)arg1 ;
-(void)setDeduplicateValues:(BOOL)arg1 ;
-(id)insertObject:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(BOOL)copyObject:(id)arg1 intoManagedObject:(id)arg2 ;
-(id)objectsFromManagedObjects:(id)arg1 ;
-(id)dataIntervalsFromManagedObjects:(id)arg1 ;
-(BOOL)readMetadata;
-(BOOL)deduplicateValues;
@end

