
void FUN_001021fa(void)

{
  return;
}




void FUN_001040bb(void)

{
  return;
}




bool FUN_0010420c(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_0010238e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c84(param_2);
  uVar1 = FUN_00102ca2(uVar1);
  FUN_00102cb4(param_1,uVar1);
  return;
}




long FUN_001031e6(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_0010358e(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001035f2(param_2);
                    /* try { // try from 00103255 to 001032e7 has its CatchHandler @ 00103313 */
    uVar2 = FUN_001031e6(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103608(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_0010358e(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001035f2(local_38);
      uVar2 = FUN_001031e6(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103608(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00103cb9(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102988(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010318e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102356(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102344(param_2);
  FUN_00102c4c(param_1,uVar1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101e88(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




int FUN_00104028(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b2e(long param_1)

{
  FUN_00101d80(param_1);
  FUN_00101da0(param_1);
  FUN_00101a1a(param_1 + 8);
  return;
}




long FUN_00102e4e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00101e40(undefined8 param_1,undefined8 param_2)

{
  FUN_00102274(param_1,param_2);
  return;
}




undefined8 FUN_00101e2a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104058(void)

{
  return;
}




ulong FUN_00103e27(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010404d(void)

{
  return;
}




void FUN_0010408f(void)

{
  return;
}




undefined8 FUN_00103850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cde(param_1);
  uVar2 = FUN_0010383d(param_2);
  FUN_001038e0(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00101d80(undefined8 param_1)

{
  FUN_001021fa(param_1);
  return;
}




void FUN_0010361e(void)

{
  return;
}




void FUN_001040c6(void)

{
  return;
}




void FUN_00101ed4(undefined8 *param_1)

{
  FUN_00102322(*param_1);
  return;
}




void FUN_00104303(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103d94(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a44(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_00102404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102cde(param_1);
  uVar2 = FUN_001023f2(param_4);
  uVar3 = FUN_001023e0(param_3);
  uVar4 = FUN_001023ce(param_2);
  FUN_00102d0a(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00104042(void)

{
  return;
}




void FUN_00101a84(undefined8 param_1)

{
  FUN_00101b6a(param_1);
  return;
}




void FUN_00102adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102322(param_2);
  uVar2 = FUN_00103392(param_1);
  FUN_001033a4(uVar2,uVar1);
  return;
}




undefined8 FUN_001023ce(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b5d(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102cb4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102344(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00101b04(undefined8 param_1,undefined8 param_2)

{
  FUN_00101cf4(param_1,param_2);
  return;
}




void FUN_00101db0(void)

{
  return;
}




undefined8 * FUN_001030ea(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_0010389c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010394e(param_2);
  puVar2 = (undefined4 *)FUN_00102ca2(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00103c38(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103373(undefined8 param_1)

{
  FUN_001019ed(param_1);
  return;
}




void FUN_001040d1(void)

{
  return;
}




void FUN_00102c2e(undefined8 param_1)

{
  FUN_00103400(param_1);
  return;
}




void FUN_00103be3(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001029d8(undefined8 param_1,undefined8 param_2)

{
  FUN_001031bc(param_1,param_2);
  return;
}




undefined8 FUN_00101f5a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102344(param_2);
  FUN_00102356(param_1,uVar1);
  return param_1;
}




void FUN_001040f2(void)

{
  return;
}




void FUN_00102314(void)

{
  return;
}




undefined8 FUN_00103392(undefined8 param_1)

{
  return param_1;
}




void FUN_00102322(long param_1)

{
  FUN_00102c2e(param_1 + 0x20);
  return;
}




undefined8 FUN_00102ec2(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00101e2a(param_1);
  local_50 = FUN_00102b5a(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_0010282d(local_58);
    local_59 = FUN_00101ef6(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_00102209(local_58);
    }
    else {
      local_58 = FUN_0010221f(local_58);
    }
  }
  FUN_0010296a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001034d8(param_1);
    cVar1 = FUN_00101e88(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103528(local_38,&local_58,&local_50);
      goto LAB_00103044;
    }
    FUN_001030be(&local_48);
  }
  uVar2 = FUN_00102e64(local_48);
  cVar1 = FUN_00101ef6(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00103116(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103528(local_38,&local_58,&local_50);
  }
LAB_00103044:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001023f2(undefined8 param_1)

{
  return param_1;
}




void FUN_001040e7(void)

{
  return;
}




void FUN_00101da0(void)

{
  return;
}




void FUN_00101dc0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_00102209(local_28);
    FUN_00101dc0(param_1,uVar1);
    lVar2 = FUN_0010221f(local_28);
    FUN_00102236(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




long FUN_00102180(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00103788(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102209(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_00102e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010191d(void)

{
  FUN_0010166a();
  FUN_001017bc();
  return;
}




undefined8 FUN_00103608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001040b0(void)

{
  return;
}




ulong FUN_00103f2b(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001040dc(void)

{
  return;
}




undefined8 FUN_00101932(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b37("Calling good()...");
  FUN_0010191d();
  FUN_00103b37("Finished good()");
  FUN_00103b37("Calling bad()...");
  FUN_00101509();
  FUN_00103b37("Finished bad()");
  return 0;
}




undefined8 FUN_001034c5(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ac4(undefined8 param_1)

{
  FUN_00101aa4(param_1);
  return;
}




void FUN_00101b6a(undefined8 param_1)

{
  FUN_00101db0(param_1);
  return;
}




void FUN_001031bc(void)

{
  return;
}




void FUN_0010296a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001019ad(void)

{
  return;
}




void FUN_00102a02(void)

{
  return;
}




void FUN_00103c0d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101aa4(undefined8 param_1)

{
  FUN_00101b2e(param_1);
  return;
}




void FUN_00101f92(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103427(undefined8 param_1,undefined8 param_2)

{
  FUN_0010365a(param_1,param_2,0);
  return;
}




void FUN_00103c63(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101509(void)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac4(local_88);
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  local_58[0] = 0;
                    /* try { // try from 00101588 to 001015f1 has its CatchHandler @ 0010163d */
  puVar1 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar1 = __ptr;
  FUN_00101b04(local_58,local_88);
                    /* try { // try from 001015f9 to 001015fd has its CatchHandler @ 00101628 */
  FUN_00103a1a(local_58);
  FUN_00101ae4(local_58);
  FUN_00101ae4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010428a(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




undefined8 FUN_001023e0(undefined8 param_1)

{
  return param_1;
}




void FUN_00104084(void)

{
  return;
}




void FUN_00103bb7(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010166a(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac4(local_88);
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 001016da to 00101743 has its CatchHandler @ 0010178f */
  puVar2 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_00101b04(local_58,local_88);
                    /* try { // try from 0010174b to 0010174f has its CatchHandler @ 0010177a */
  FUN_00103a7d(local_58);
  FUN_00101ae4(local_58);
  FUN_00101ae4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010379a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_0010383d(param_2);
  FUN_00103850(uVar1,uVar2);
  return;
}




void FUN_00103116(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034c5(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001039a9(undefined8 param_1)

{
  FUN_00102c84(param_1);
  return;
}




void FUN_00101e6a(undefined8 param_1)

{
  FUN_001022c4(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_001033a4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010361e(param_1,param_2);
  return;
}




undefined4 FUN_00101ef6(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_001040a5(void)

{
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00102de8(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102b5a(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102e64(local_50);
    cVar2 = FUN_00101ef6(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102e64(local_50);
      cVar2 = FUN_00101ef6(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00103116(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102e4e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102e4e(local_60);
          local_48[1] = 0;
          FUN_00102e82(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001030ea(local_48);
          uVar6 = FUN_00102e64(*puVar5);
          cVar2 = FUN_00101ef6(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102ec2(local_60,param_3);
          }
          else {
            lVar3 = FUN_00102209(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102e82(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00103076(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00103060(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00103060(local_60);
        uVar6 = FUN_00103060(local_60);
        FUN_00103076(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_001030be(local_48);
        uVar6 = FUN_00102e64(*puVar5);
        cVar2 = FUN_00101ef6(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102ec2(local_60,param_3);
        }
        else {
          lVar3 = FUN_00102209(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102e82(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00103076(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00102812;
  }
  lVar3 = FUN_00102e38(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00102526:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102e4e(local_60);
    uVar6 = FUN_00102e64(*puVar5);
    cVar2 = FUN_00101ef6(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00102526;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102e4e(local_60);
    local_48[1] = 0;
    FUN_00102e82(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102ec2(local_60,param_3);
  }
LAB_00102812:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00102236(undefined8 param_1,undefined8 param_2)

{
  FUN_00102adc(param_1,param_2);
  FUN_00102b20(param_1,param_2);
  return;
}




undefined8 FUN_0010216a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 * FUN_001030be(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00101a1a(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101a44(param_1);
  return;
}




void FUN_00103dc7(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102c84(undefined8 param_1)

{
  FUN_00103412(param_1);
  return;
}




void FUN_0010406e(void)

{
  return;
}




long FUN_00101bc8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00101e40(param_1,param_2);
  local_28 = FUN_00101e6a(param_1);
  cVar2 = FUN_00101e88(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101eae(param_1);
    uVar3 = FUN_00101ed4(&local_38);
    cVar2 = FUN_00101ef6(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101c68;
    }
  }
  bVar1 = true;
LAB_00101c68:
  if (bVar1) {
    uVar3 = FUN_00101f1d(param_2);
    FUN_00101f5a(local_30,uVar3);
    FUN_00101f92(&local_28,&local_38);
    local_38 = FUN_00101fb4(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101ed4(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103156(long param_1)

{
  FUN_00103570(param_1 + 0x20);
  return;
}




undefined8 FUN_001022c4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010296a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001019c0(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010396c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010383d(param_3);
  FUN_001039c8(param_1,param_2,uVar1);
  return;
}




void FUN_00104079(void)

{
  return;
}




void FUN_001043e0(void)

{
  return;
}




undefined8 FUN_00103412(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102d0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101997(0x30,param_2);
  uVar1 = FUN_001023f2(param_5);
  uVar2 = FUN_001023e0(param_4);
  uVar3 = FUN_001023ce(param_3);
  uVar4 = FUN_00102322(param_2);
  uVar5 = FUN_00103392(param_1);
                    /* try { // try from 00102d99 to 00102d9d has its CatchHandler @ 00102da0 */
  FUN_00103455(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined4 * FUN_0010358e(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103156(param_2);
  puVar2 = (undefined4 *)FUN_0010379a(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00102a16(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001033ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103632(param_1,param_2,param_3);
  return;
}




undefined8
FUN_00101fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001023f2(param_5);
  uVar2 = FUN_001023e0(param_4);
  uVar3 = FUN_001023ce(param_3);
  local_40 = FUN_00102404(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00102030 to 00102073 has its CatchHandler @ 001020b1 */
  uVar1 = FUN_0010282d(local_40);
  local_38 = FUN_00102484(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102236(param_1,local_40);
    FUN_0010296a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102880(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101b8a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e2a(param_1);
  FUN_00101dc0(param_1,uVar1);
  FUN_00101a84(param_1);
  return;
}




undefined8 FUN_00102344(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001037d4(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined8 FUN_00103775(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103178(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_0010400a(void)

{
  return 1;
}




undefined8 FUN_001031d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010409a(void)

{
  return;
}




void FUN_00104322(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103400(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d3b(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101bc8(param_1,&local_1c);
  local_18 = *puVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101997(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101b8a(param_1);
  return;
}




long FUN_00103060(long param_1)

{
  return param_1 + 0x18;
}




undefined4 FUN_00101eae(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00102314(param_1);
  return unaff_EBX;
}




void FUN_00103b8f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102b70(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_0010282d(local_38);
    cVar1 = FUN_00101ef6(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_00102209(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_0010221f(local_38);
    }
  }
  FUN_0010296a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_001034d8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010296a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001038e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101997(0x30,param_2);
  uVar1 = FUN_0010383d(param_3);
  uVar2 = FUN_00102322(param_2);
  uVar3 = FUN_00103392(param_1);
  FUN_0010396c(uVar3,uVar2,uVar1);
  return;
}




void FUN_00102cde(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103392(param_1);
  FUN_00103427(uVar1,1);
  return;
}




void FUN_00103c8e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001036aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001023ce(param_3);
  uVar1 = FUN_001023e0(param_4);
  FUN_00101f30(local_38,uVar1);
  FUN_001023f2(param_5);
  uVar1 = FUN_00101997(0x10,param_2);
                    /* try { // try from 00103732 to 00103736 has its CatchHandler @ 00103739 */
  FUN_001037ec(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001019ed(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103a1a(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101bc8(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010282d(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103156(param_1);
  FUN_00103178(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020fa(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102988(param_1,param_2);
  FUN_00102a02(param_1,param_2);
  FUN_00101a1a(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e82(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_001034c5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103d13(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103076(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001034c5(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034c5(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00102a34(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102b5a(param_1);
  uVar2 = FUN_001031d0(param_2);
  uVar1 = FUN_001031e6(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00103060(param_1);
  uVar2 = FUN_00103355(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102e4e(param_1);
  uVar2 = FUN_00103373(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00102de8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010296a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104063(void)

{
  return;
}




void FUN_00101cf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001020fa(param_1,param_2);
  lVar1 = FUN_0010216a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102180(param_1);
                    /* try { // try from 00101d4f to 00101d53 has its CatchHandler @ 00101d59 */
    uVar3 = FUN_00102196(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00101f30(undefined8 param_1,undefined8 param_2)

{
  FUN_0010238e(param_1,param_2);
  return;
}




void FUN_001037ec(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010389c(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040fd(void)

{
  return;
}




void FUN_001039c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_0010383d(param_3);
  puVar3 = (undefined8 *)FUN_00101997(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00102196(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a16(local_18,param_1);
  FUN_00102a34(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104370(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_00103b37(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103d66(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102b5a(param_1);
  uVar2 = FUN_00101e2a(param_1);
  FUN_00102b70(param_1,uVar2,uVar1,param_2);
  return;
}




undefined8 FUN_00102ca2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104267(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010383d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001035f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103455(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001023f2(param_5);
  uVar2 = FUN_001023e0(param_4);
  uVar3 = FUN_001023ce(param_3);
  FUN_001036aa(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00104019(void)

{
  return 0;
}




void FUN_00102c4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102344(param_2);
  FUN_00102cb4(param_1,uVar1);
  return;
}




void FUN_00103570(undefined8 param_1)

{
  FUN_00103788(param_1);
  return;
}




void FUN_00102e64(undefined8 param_1)

{
  FUN_0010282d(param_1);
  return;
}




long FUN_00102b5a(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_0010221f(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104341(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103355(undefined8 param_1)

{
  FUN_001019c0(param_1);
  return;
}




void FUN_0010394e(undefined8 param_1)

{
  FUN_001039a9(param_1);
  return;
}




void FUN_00103528(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103775(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_001034c5(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010365a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001037d4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00101f1d(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010413f(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104108,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00103a7d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101bc8(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103632(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8
FUN_00102880(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102b5a(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102e64(param_3);
      uVar5 = FUN_0010282d(param_4);
      cVar1 = FUN_00101ef6(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00102904;
      }
    }
  }
  bVar2 = true;
LAB_00102904:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010296a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_00102b20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103392(param_1);
  FUN_001033ce(uVar1,param_2,1);
  return;
}




undefined8 FUN_0010318e(undefined8 param_1,undefined8 param_2)

{
  FUN_001029d8(param_1,param_2);
  return param_1;
}




void FUN_00104108(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001017bc(void)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ac4(local_88);
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  local_58[0] = 0;
                    /* try { // try from 0010183b to 001018a4 has its CatchHandler @ 001018f0 */
  puVar1 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101bc8(local_88,local_58);
  *puVar1 = __ptr;
  FUN_00101b04(local_58,local_88);
                    /* try { // try from 001018ac to 001018b0 has its CatchHandler @ 001018db */
  FUN_00103ae0(local_58);
  FUN_00101ae4(local_58);
  FUN_00101ae4(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



