/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@interface CVMLSimilarityMatrix : NSObject {

	shared_ptr<vision::mod::SimilarityMatrixAbstract>* m_MatrixImpl;

}

@property (getter=getMatrixSize,nonatomic,readonly) unsigned long long matrixSize; 
@property (getter=getMaximumValidMatrixDistance,nonatomic,readonly) float maximumValidMatrixDistance; 
@property (getter=getImpl,nonatomic,readonly) void* impl; 
-(void*)getImpl;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)addDescriptors:(id)arg1 error:(id*)arg2 ;
-(void)deleteDescriptors:(id)arg1 ;
-(unsigned long long)getMatrixSize;
-(id)getDescriptorIdsForRange:(NSRange)arg1 ;
-(id)getAllDistancesForId:(unsigned long long)arg1 ;
-(float)getMaximumValidMatrixDistance;
-(id)createCopyForDescriptorIds:(id)arg1 ;
-(float)getDistanceBetweenDescriptor:(unsigned long long)arg1 andDescriptor:(unsigned long long)arg2 ;
-(BOOL)containsId:(unsigned long long)arg1 ;
@end

