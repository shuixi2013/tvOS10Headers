/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, MADatabase, NSMutableArray, NSUUID, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface MAGraph : NSObject <NSXMLParserDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MADatabase* _persistentStore;
	NSMutableArray* _keepsLoadedDomains;
	NSUUID* _identifier;
	unsigned long long _version;
	NSMutableDictionary* _nodesByIdentifier;
	NSMutableDictionary* _nodesByLabel;
	NSMutableDictionary* _edgesByIdentifier;
	NSMutableDictionary* _edgesByLabel;
	NSMutableIndexSet* _fragmentedNodeIdentifiers;
	NSMutableIndexSet* _fragmentedEdgeIdentifiers;
	unsigned _lastNodeIdentifier;
	unsigned _lastEdgeIdentifier;
	NSMutableArray* _labelStrings;
	NSMutableDictionary* _labelsForStrings;

}

@property (nonatomic,retain) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) MADatabase * persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
@property (assign,nonatomic) unsigned long long version;                  //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)graph;
+(id)graphWithMergedGraphs:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
+(id)dataURLWithPath:(id)arg1 andName:(id)arg2 ;
+(id)graphMLURLWithPath:(id)arg1 andName:(id)arg2 ;
+(Class)persistentStoreClass;
+(BOOL)scanGraphElementString:(id)arg1 type:(unsigned long long*)arg2 optionalName:(id*)arg3 label:(id*)arg4 optionalDomains:(id*)arg5 optionalProperties:(id*)arg6 error:(id*)arg7 ;
+(id)scanGraphConstraintString:(id)arg1 error:(id*)arg2 ;
+(BOOL)scanGraphElementOptionsString:(id)arg1 minimum:(unsigned long long*)arg2 maximum:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)scanMatchString:(id)arg1 definitions:(id*)arg2 constaints:(id*)arg3 forCreation:(BOOL)arg4 error:(id*)arg5 ;
+(id)graphWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
+(id)graphWithVisualString:(id)arg1 error:(id*)arg2 ;
+(id)persistentStoreURLWithPath:(id)arg1 andName:(id)arg2 ;
+(Class)nodeClass;
+(Class)edgeClass;
+(BOOL)hasMarker:(id)arg1 ;
+(BOOL)destroyPersistentStoreAtURL:(id)arg1 error:(id*)arg2 ;
+(void)deleteMarker:(id)arg1 ;
+(BOOL)migratePersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)copyPersistentStoreFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(void)_setVersion:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)dataRepresentation:(id*)arg1 ;
-(void)removeEdge:(id)arg1 ;
-(void)removeNodeEdges:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
-(id)_nodesForLabel:(id)arg1 ;
-(id)_allNodes;
-(id)_edgesForLabel:(id)arg1 ;
-(id)_allEdges;
-(id)addNodeWithLabel:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)removeEdges:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(MADatabase *)persistentStore;
-(unsigned short)_labelForString:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_addNodeFromBase:(id)arg1 saveToDatabase:(BOOL)arg2 ;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)_addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 saveToDatabase:(BOOL)arg4 ;
-(void)_prepareFragmentedIdentifiers;
-(void)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 ;
-(unsigned)_nextNodeIdentifier;
-(id)_addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 saveToDatabase:(BOOL)arg5 ;
-(void)_addNode:(id)arg1 withIdentifier:(unsigned)arg2 saveToDatabase:(BOOL)arg3 ;
-(void)_removeMemoryNode:(id)arg1 ;
-(id)nodesForDomains:(id)arg1 ;
-(id)_stringForLabel:(unsigned short)arg1 ;
-(id)_keyForLabelString:(id)arg1 ;
-(unsigned)_nextEdgeIdentifier;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(id)_addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 saveToDatabase:(BOOL)arg7 ;
-(void)_addEdge:(id)arg1 withIdentifier:(unsigned)arg2 saveToDatabase:(BOOL)arg3 ;
-(void)_removeMemoryEdge:(id)arg1 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)edgesForDomains:(id)arg1 ;
-(unsigned long long)_memoryFootprint:(id)arg1 ;
-(void)_setLabelStrings:(id)arg1 ;
-(id)_labelStrings;
-(void)mergeReuseWithGraph:(id)arg1 ;
-(id)addNodeFromBase:(id)arg1 ;
-(id)nodesForDomain:(unsigned short)arg1 ;
-(id)addEdgeFromBase:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(void)performAsynchronousBarrierWriteUsingBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousConcurrentReadUsingBlock:(/*^block*/id)arg1 ;
-(id)envelopGraphForNodes:(id)arg1 throughEdgesWithLabels:(id)arg2 copyProperties:(BOOL)arg3 ;
-(void)_loadWithGraphDictionary:(id)arg1 ;
-(id)_graphDictionary;
-(id)initWithDataURL:(id)arg1 ;
-(id)initWithGraphMLURL:(id)arg1 ;
-(void)savePersistentStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)prefetchDomain:(unsigned short)arg1 ;
-(void)_prefetchPropertiesForElements:(id)arg1 forType:(id)arg2 ;
-(void)deleteMarker;
-(void)unregisterForPrefetchDomains:(unsigned short)arg1 ;
-(void)prefetchEdgesWithLabels:(id)arg1 ;
-(void)prefetchNodesWithLabels:(id)arg1 ;
-(void)prefetchAllDomains;
-(id)_constraintAbstractEdgesFromAbstractNode:(id)arg1 inConstraints:(id*)arg2 ;
-(BOOL)_matchNode:(id)arg1 usingAbstractNode:(id)arg2 fromEdge:(id)arg3 atIteration:(unsigned long long)arg4 withDefinitions:(id)arg5 constraints:(id)arg6 unusedConstraints:(id)arg7 andSubGraph:(id)arg8 matchingNodeQueue:(id)arg9 ;
-(id)selectBestRootNodeForPath:(id)arg1 withDefinitions:(id)arg2 ;
-(id)matchWithDefinitions:(id)arg1 constraints:(id)arg2 error:(id*)arg3 ;
-(id)shortestPathBetweenStartNode:(id)arg1 andEndNode:(id)arg2 directed:(BOOL)arg3 ;
-(void)traversingGraphDepthFirstFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)traversingGraphBreadthFirstFromNode:(id)arg1 directed:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)invalidateMemoryCaches;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(void)setMarker;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)edgesCount;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)matchWithVisualString:(id)arg1 error:(id*)arg2 ;
-(id)matchWithVisualFormat:(id)arg1 elements:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)nodesCount;
-(unsigned long long)nodesCountForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)edgesForDomain:(unsigned short)arg1 ;
-(id)addUniqueNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 didCreate:(BOOL*)arg5 ;
-(id)addUniqueEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6 ;
-(void)enterBatch;
-(void)leaveBatch;
-(BOOL)savePersistentStore;
-(id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4 ;
-(id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 ;
-(id)initWithPersistentStoreURL:(id)arg1 ;
-(void)registerForPrefetchDomains:(unsigned short)arg1 ;
-(BOOL)writeDataToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMarker;
-(BOOL)migratePersistentStoreToURL:(id)arg1 error:(id*)arg2 ;
-(void)prefetchDomains:(id)arg1 ;
-(id)nodesLabels;
-(id)edgesLabels;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(void)mergeCopyWithGraph:(id)arg1 ;
-(id)mergeWithGraph:(id)arg1 strictNodes:(BOOL)arg2 strictEdges:(BOOL)arg3 saveToDatabase:(BOOL)arg4 ;
@end

