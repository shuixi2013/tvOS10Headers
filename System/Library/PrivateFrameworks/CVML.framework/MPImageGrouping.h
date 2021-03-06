/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@interface MPImageGrouping : NSObject
+(long long)computeHierarchicalClusteringOfImageDescriptors:(id)arg1 results:(MPClusteringTreeNode*)arg2 context:(id)arg3 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeClusteringIntoKGroups:(int)arg1 forHierarchicalTree:(MPClusteringTreeNode*)arg2 context:(id)arg3 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeClusteringUsingDistanceThreshold:(float)arg1 forHierarchicalTree:(MPClusteringTreeNode*)arg2 context:(id)arg3 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeNaturalClusteringForHierarchicalTree:(MPClusteringTreeNode*)arg1 context:(id)arg2 ;
+(float)computeTotalDistanceForDescriptorDistance:(float)arg1 timestampDiff:(long long)arg2 useTimestampAdjustment:(BOOL)arg3 ;
+(float)getDistanceForClusterNode:(MPClusteringTreeNode*)arg1 splitDistanceType:(int)arg2 ;
+(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)computeClusteringIntoKGroups:(int)arg1 orUsingDistanceThreshold:(float)arg2 forHierarchicalTree:(MPClusteringTreeNode*)arg3 context:(id)arg4 ;
+(float)computeTimestampAdjustedDistanceForBaseDistance:(float)arg1 andTimestampDiff:(long long)arg2 ;
@end

