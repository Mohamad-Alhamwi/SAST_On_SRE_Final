
void FUN_00101ef4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001017f8(undefined8 param_1)

{
  FUN_00101864(param_1);
  return;
}




void FUN_00101c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_00101f12(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00101f5c(&local_18);
    FUN_00101f7e(local_10,uVar2);
    FUN_00101f38(&local_18);
  }
  return;
}




void FUN_0010223e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001022a0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00101cb8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102903(void)

{
  return;
}




void FUN_00101fea(void)

{
  return;
}




void FUN_00102992(void)

{
  return;
}




void FUN_00102c80(void)

{
  return;
}




void FUN_0010208e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00101ffd(*param_1,param_1[1],1);
  }
  return;
}




undefined8 FUN_001029df(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001029a8,local_18);
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




void FUN_00101798(undefined8 param_1)

{
  FUN_00101844(param_1);
  return;
}




ulong FUN_001027cb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001022a0(void)

{
  return 0x555555555555555;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105f00)();
  return;
}




void FUN_00102174(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010228e(undefined8 param_1)

{
  return param_1;
}




void FUN_001019b6(void)

{
  return;
}




void FUN_00102971(void)

{
  return;
}




void FUN_00102945(void)

{
  return;
}




undefined8 FUN_001021c9(undefined8 param_1)

{
  return param_1;
}




void FUN_001023fd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102bc2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 * FUN_00101f38(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00102966(void)

{
  return;
}




undefined8 FUN_00101e48(undefined8 param_1,undefined8 param_2)

{
  FUN_00101e76(param_1,param_2);
  return param_1;
}




void FUN_001028ed(void)

{
  return;
}




ulong FUN_001026c7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001019c6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101c96(local_20);
    uVar3 = FUN_00101cb8(param_1);
    FUN_00101cca(uVar3,uVar2);
    FUN_00101cf4(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_001028aa(void)

{
  return 1;
}




void FUN_00102503(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102559(undefined4 param_1)

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




int FUN_001028c8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001016b7(void)

{
  FUN_00101590();
  return;
}




void FUN_00101e76(undefined8 param_1,undefined8 param_2)

{
  FUN_0010212c(param_1,param_2);
  return;
}




void FUN_001017d8(undefined8 param_1)

{
  FUN_001017b8(param_1);
  return;
}




void FUN_00101a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101d42(param_3);
  p_Var2 = (_List_node_base *)FUN_00101d54(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101e1e(param_1,1);
  return;
}




void FUN_00102457(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010297c(void)

{
  return;
}




void FUN_001021dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101d42(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010172c(8,param_2);
  *puVar2 = uVar1;
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013b0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00101a44(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d24(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e1e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




bool FUN_00102aac(pthread_t *param_1)

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




void FUN_00101cca(undefined8 param_1,undefined8 param_2)

{
  FUN_00101fea(param_1,param_2);
  return;
}




void FUN_001022b8(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102334(param_1);
  __ptr = (void *)*puVar1;
  FUN_00102634(__ptr);
  free(__ptr);
  return;
}




undefined8 FUN_00101bdc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028e2(void)

{
  return;
}




undefined8 FUN_00101b8c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ea0(param_2);
  FUN_00101eb2(param_1,uVar1);
  return;
}




void FUN_00101c96(long param_1)

{
  FUN_00101fcc(param_1 + 0x10);
  return;
}




void FUN_00101762(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101864(undefined8 param_1)

{
  FUN_001019c6(param_1);
  FUN_00101798(param_1);
  return;
}




undefined8 FUN_0010172c(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102b2a(undefined8 *param_1)

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




void FUN_001024ad(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010290e(void)

{
  return;
}




void FUN_00102220(undefined8 param_1)

{
  FUN_0010228e(param_1);
  return;
}




void FUN_00102634(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101844(undefined8 param_1)

{
  FUN_001019b6(param_1);
  return;
}




void FUN_00101590(void)

{
  long in_FS_OFFSET;
  undefined4 *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017d8(local_58);
  local_60 = (undefined4 *)0x0;
  local_60 = (undefined4 *)malloc(8);
  if (local_60 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 1;
  local_60[1] = 2;
                    /* try { // try from 00101604 to 00101641 has its CatchHandler @ 0010168d */
  FUN_00101890(local_58,&local_60);
  FUN_00101890(local_58,&local_60);
  FUN_00101890(local_58,&local_60);
  FUN_001018ca(local_38,local_58);
                    /* try { // try from 00101649 to 0010164d has its CatchHandler @ 00101678 */
  FUN_001022f6(local_38);
  FUN_001017f8(local_38);
  FUN_001017f8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017b8(undefined8 param_1)

{
  FUN_00101818(param_1);
  return;
}




void FUN_00101d24(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101d42(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101af1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e48(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101eb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101ea0(param_2);
  FUN_00101e76(param_1,uVar1);
  FUN_00101742(param_1);
  return;
}




undefined8 FUN_00102b07(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010292f(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00102ba3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f5c(undefined8 *param_1)

{
  FUN_00102140(*param_1);
  return;
}




undefined8 FUN_001028b9(void)

{
  return 0;
}




void FUN_00101742(undefined8 param_1)

{
  FUN_00101762(param_1);
  return;
}




undefined8 FUN_00101ea0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010212c(void)

{
  return;
}




undefined8 FUN_00102162(undefined8 param_1)

{
  return param_1;
}




void FUN_00102054(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001029a8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long * FUN_00102392(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




long FUN_0010210a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_001024d8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010293a(void)

{
  return;
}




void FUN_00101890(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101a44(param_1);
  FUN_00101a90(param_1,uVar1,param_2);
  return;
}




void FUN_00101fcc(undefined8 param_1)

{
  FUN_00102162(param_1);
  return;
}




void FUN_00102030(undefined8 param_1)

{
  FUN_0010219b(param_1,1);
  return;
}




void FUN_001023d7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102667(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102c10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102be1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001025db(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001028f8(void)

{
  return;
}




void FUN_00101818(undefined8 param_1)

{
  FUN_00101996(param_1);
  FUN_00101742(param_1);
  return;
}




void FUN_001023b6(undefined8 *param_1)

{
  FUN_00101c96(*param_1);
  return;
}




void FUN_00102334(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101a44(param_1);
  FUN_00102392(&local_18);
  FUN_001023b6(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101cf4(undefined8 param_1,undefined8 param_2)

{
  FUN_00101ffd(param_1,param_2,1);
  return;
}




undefined8 FUN_00101d54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102030(param_1);
  uVar2 = FUN_00101cb8(param_1);
  FUN_00102054(local_38,uVar2,uVar1);
  uVar3 = FUN_00101d42(param_2);
  uVar4 = FUN_00101c96(uVar1);
  FUN_001020cd(uVar2,uVar4,uVar3);
  FUN_0010210a(local_38,0);
  FUN_0010208e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102919(void)

{
  return;
}




void FUN_001025b3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001018ca(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101b42(param_2);
  FUN_00101af1(&local_21,uVar1);
  FUN_00101b54(param_1,&local_21);
  FUN_00101844(&local_21);
  uVar1 = FUN_00101bdc(param_2);
  uVar2 = FUN_00101b8c(param_2);
                    /* try { // try from 00101956 to 0010195a has its CatchHandler @ 0010195d */
  FUN_00101c28(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c86(void)

{
  return;
}




void FUN_0010219b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010223e(param_1,param_2,0);
  return;
}




void FUN_001022f6(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102334(param_1);
  __ptr = (void *)*puVar1;
  FUN_00102634(__ptr);
  free(__ptr);
  return;
}




void FUN_001020cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d42(param_3);
  FUN_001021dc(param_1,param_2,uVar1);
  return;
}




void FUN_00102483(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010299d(void)

{
  return;
}




void FUN_00101996(undefined8 param_1)

{
  FUN_00101c86(param_1);
  return;
}




void FUN_0010242f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010252e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102924(void)

{
  return;
}




void FUN_00102987(void)

{
  return;
}




void FUN_00102606(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101b42(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001016c7(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001023d7("Calling good()...");
  FUN_001016b7();
  FUN_001023d7("Finished good()");
  FUN_001023d7("Calling bad()...");
  FUN_00101469();
  FUN_001023d7("Finished bad()");
  return 0;
}




void FUN_00102140(long param_1)

{
  FUN_00102220(param_1 + 0x10);
  return;
}




void FUN_00101469(void)

{
  long in_FS_OFFSET;
  undefined4 *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001017d8(local_58);
  local_60 = (undefined4 *)0x0;
  local_60 = (undefined4 *)malloc(8);
  if (local_60 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 1;
  local_60[1] = 2;
                    /* try { // try from 001014dd to 0010151a has its CatchHandler @ 00101566 */
  FUN_00101890(local_58,&local_60);
  FUN_00101890(local_58,&local_60);
  FUN_00101890(local_58,&local_60);
  FUN_001018ca(local_38,local_58);
                    /* try { // try from 00101522 to 00101526 has its CatchHandler @ 00101551 */
  FUN_001022b8(local_38);
  FUN_001017f8(local_38);
  FUN_001017f8(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101f12(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00101f7e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101d42(param_2);
  uVar2 = FUN_00101a44(param_1);
  FUN_00101a90(param_1,uVar2,uVar1);
  return;
}




void FUN_00101ffd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102174(param_1,param_2,param_3);
  return;
}




void FUN_0010295b(void)

{
  return;
}




void FUN_00102950(void)

{
  return;
}



