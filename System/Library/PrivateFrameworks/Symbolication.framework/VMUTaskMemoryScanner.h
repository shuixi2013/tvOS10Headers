/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/VMUCommonGraphInterface.h>

@class VMUObjectIdentifier, VMUVMRegionIdentifier, VMURangeArray, VMUClassInfoMap, VMUProcessObjectGraph, NSString;

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface> {

	unsigned _task;
	int _pid;
	unsigned long long _suspendTime;
	unsigned _suspensionToken;
	VMUObjectIdentifier* _objectIdentifier;
	VMUVMRegionIdentifier* _regionIdentifier;
	VMUBlockNode* _blocks;
	unsigned _blocksCount;
	unsigned _blocksSize;
	VMURegionNode* _regions;
	unsigned _regionsCount;
	VMURegionMap* _regionMap;
	VMURangeArray* _stackRanges;
	VMUZoneNode* _zones;
	unsigned _zonesCount;
	unsigned _zonesSize;
	VMUThreadNode* _threads;
	unsigned _threadsCount;
	VMUInstanceValues* _instanceValues;
	unsigned _instanceValuesCount;
	unsigned _instanceValuesSize;
	id* _classInfos;
	unsigned _classInfosCount;
	VMUClassInfoMap* _classInfoIndexer;
	BOOL _exactScanningEnabled;
	unsigned long long _maxInteriorOffset;
	unsigned _scanningMask;
	/*^block*/id _referenceLogger;
	/*^block*/id _nodeLogger;
	BOOL _abandonedMarkingEnabled;
	BOOL _saveNodeLabelsInGraph;
	VMUProcessObjectGraph* _processObjectGraph;
	void* _userMarkedAbandoned;
	unsigned long long _cfPasteboardReservedBase;

}

@property (assign,nonatomic) BOOL exactScanningEnabled;                         //@synthesize exactScanningEnabled=_exactScanningEnabled - In the implementation block
@property (assign,nonatomic) BOOL abandonedMarkingEnabled;                      //@synthesize abandonedMarkingEnabled=_abandonedMarkingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long maxInteriorOffset;              //@synthesize maxInteriorOffset=_maxInteriorOffset - In the implementation block
@property (assign,nonatomic) unsigned scanningMask;                             //@synthesize scanningMask=_scanningMask - In the implementation block
@property (assign,nonatomic) BOOL saveNodeLabelsInGraph;                        //@synthesize saveNodeLabelsInGraph=_saveNodeLabelsInGraph - In the implementation block
@property (nonatomic,readonly) unsigned nodeCount;                              //@synthesize blocksCount=_blocksCount - In the implementation block
@property (nonatomic,readonly) unsigned zoneCount;                              //@synthesize zonesCount=_zonesCount - In the implementation block
@property (nonatomic,readonly) unsigned mallocNodeCount; 
@property (nonatomic,readonly) VMUClassInfoMap * realizedClasses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid;                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) unsigned vmPageSize; 
@property (nonatomic,readonly) unsigned regionCount;                            //@synthesize regionsCount=_regionsCount - In the implementation block
@property (nonatomic,readonly) unsigned nodeNamespaceSize; 
+(void)initialize;
+(id)nodeDescription:(SCD_Struct_VM12)arg1 withNodeOffset:(unsigned long long)arg2 sortedVMRegions:(id)arg3 ;
+(id)referenceDescription:(SCD_Struct_VM10)arg1 withSourceNode:(SCD_Struct_VM12)arg2 destinationNode:(SCD_Struct_VM12)arg3 sortedVMRegions:(id)arg4 symbolicator:(CSTypeRef)arg5 alignmentSpacing:(unsigned)arg6 ;
-(unsigned)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(unsigned)nodeCount;
-(unsigned)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithTask:(unsigned)arg1 ;
-(BOOL)_suspend;
-(void)addRootNodesFromTask;
-(void)addMallocNodes:(id)arg1 ;
-(void)removeRootReachableNodes;
-(void)detachFromTask;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(VMUClassInfoMap *)realizedClasses;
-(unsigned)zoneCount;
-(id)zoneNameForIndex:(unsigned)arg1 ;
-(unsigned)vmPageSize;
-(unsigned)enumerateRegionsWithBlock:(/*^block*/id)arg1 ;
-(unsigned)nodeNamespaceSize;
-(SCD_Struct_VM12)nodeDetails:(unsigned)arg1 ;
-(id)labelForNode:(unsigned)arg1 ;
-(id)vmuVMRegionForNode:(unsigned)arg1 ;
-(id)nodeDescription:(unsigned)arg1 withOffset:(unsigned long long)arg2 ;
-(id)nodeDescription:(unsigned)arg1 ;
-(void)markReachableNodesFromRoots:(void*)arg1 inMap:(void*)arg2 ;
-(void*)copyUserMarked;
-(unsigned)enumerateMarkedObjects:(void*)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)enumerateReferencesWithBlock:(/*^block*/id)arg1 ;
-(void)refineTypesWithOverlay:(id)arg1 ;
-(void*)contentForNode:(unsigned)arg1 ;
-(unsigned)regionCount;
-(id)_initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(void)setNodeScanningLogger:(/*^block*/id)arg1 ;
-(void)setReferenceScanningLogger:(/*^block*/id)arg1 ;
-(void)_withMemoryReaderBlock:(/*^block*/id)arg1 ;
-(void)_callRemoteMallocEnumerators:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)_sortAndClassifyBlocks;
-(void)_sortBlocks;
-(void)_fixupBlockIsas;
-(void)_findMarkedAbandonedBlocks;
-(void)_withOrderedNodeMapper:(/*^block*/id)arg1 ;
-(void)_orderedScanWithScanner:(/*^block*/id)arg1 recorder:(/*^block*/id)arg2 keepMapped:(BOOL)arg3 actions:(/*^block*/id)arg4 ;
-(void)_withScanningContext:(/*^block*/id)arg1 ;
-(unsigned)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned*)arg1 nodeCount:(unsigned)arg2 recorder:(/*^block*/id)arg3 ;
-(id)processSnapshotGraph;
-(void)scanNodesForReferences:(/*^block*/id)arg1 ;
-(id)initWithSelfTaskAndOptions:(unsigned long long)arg1 ;
-(unsigned)scanningMaskForAllReferences;
-(void)addMallocNodesFromTask;
-(void)orderedNodeTraversal:(int)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)scanNodesIntoGraph;
-(id)zoneNameForNode:(unsigned)arg1 ;
-(unsigned)mallocNodeCount;
-(id)referenceDescription:(SCD_Struct_VM10)arg1 withSourceNode:(unsigned)arg2 destinationNode:(unsigned)arg3 symbolicator:(CSTypeRef)arg4 alignmentSpacing:(unsigned)arg5 ;
-(unsigned long long)maxInteriorOffset;
-(void)setMaxInteriorOffset:(unsigned long long)arg1 ;
-(BOOL)exactScanningEnabled;
-(void)setExactScanningEnabled:(BOOL)arg1 ;
-(unsigned)scanningMask;
-(void)setScanningMask:(unsigned)arg1 ;
-(BOOL)saveNodeLabelsInGraph;
-(void)setSaveNodeLabelsInGraph:(BOOL)arg1 ;
-(BOOL)abandonedMarkingEnabled;
-(void)setAbandonedMarkingEnabled:(BOOL)arg1 ;
-(int)pid;
@end

