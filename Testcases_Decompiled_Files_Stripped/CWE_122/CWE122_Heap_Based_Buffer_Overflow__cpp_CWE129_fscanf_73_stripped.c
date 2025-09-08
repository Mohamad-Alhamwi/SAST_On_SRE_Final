
void FUN_00101da2(long param_1)

{
  FUN_001020d8(param_1 + 0x10);
  return;
}




void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013f0();
    DAT_00106028 = 1;
    return;
  }
  return;
}




void FUN_0010199c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b50(param_1);
  FUN_00101b9c(param_1,uVar1,param_2);
  return;
}




void FUN_00102160(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022d5(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00101ac2(void)

{
  return;
}




void FUN_001028b5(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010213c(param_1);
  uVar2 = FUN_00101dc4(param_1);
  FUN_00102160(local_38,uVar2,uVar1);
  uVar3 = FUN_00101e4e(param_2);
  uVar4 = FUN_00101da2(uVar1);
  FUN_001021d9(uVar2,uVar4,uVar3);
  FUN_00102216(local_38,0);
  FUN_0010219a(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102c05(void)

{
  return;
}




void FUN_00102c7e(void)

{
  return;
}




undefined8 FUN_00101fac(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c26(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef0)();
  return;
}




void FUN_00102759(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001021d9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101e4e(param_3);
  FUN_001022e8(param_1,param_2,uVar1);
  return;
}




void FUN_0010208a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101e4e(param_2);
  uVar2 = FUN_00101b50(param_1);
  FUN_00101b9c(param_1,uVar2,uVar1);
  return;
}




void FUN_0010219a(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102109(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010184e(undefined8 param_1)

{
  FUN_0010186e(param_1);
  return;
}




void FUN_00102be4(void)

{
  return;
}




ulong FUN_00102acd(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ec,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001020f6(void)

{
  return;
}




undefined8 FUN_001022d5(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c5d(void)

{
  return;
}




void FUN_00101dd6(undefined8 param_1,undefined8 param_2)

{
  FUN_001020f6(param_1,param_2);
  return;
}




int FUN_00102bca(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00101c98(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102000(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102830(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102caa(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102731(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010186e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102785(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




bool FUN_00102dae(pthread_t *param_1)

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




void FUN_001023c2(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_00102636(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001026d9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102731(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_0010255e(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_00102636(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001026d9("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102731(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_001027da(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101ce8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102000(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




undefined8 FUN_00102e09(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001018c4(undefined8 param_1)

{
  FUN_00101924(param_1);
  return;
}




void FUN_0010232a(undefined8 param_1)

{
  FUN_00102398(param_1);
  return;
}




void FUN_00102bef(void)

{
  return;
}




void FUN_00102109(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102280(param_1,param_2,param_3);
  return;
}




void FUN_001018a4(undefined8 param_1)

{
  FUN_00101950(param_1);
  return;
}




void FUN_00101c60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fac(param_2);
  FUN_00101fbe(param_1,uVar1);
  return;
}




void FUN_00102f10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102c31(void)

{
  return;
}




void FUN_00102ee3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101ad2(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101da2(local_20);
    uVar3 = FUN_00101dc4(param_1);
    FUN_00101dd6(uVar3,uVar2);
    FUN_00101e00(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




long FUN_00102216(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00101970(undefined8 param_1)

{
  FUN_00101ad2(param_1);
  FUN_001018a4(param_1);
  return;
}




void FUN_00102805(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101950(undefined8 param_1)

{
  FUN_00101ac2(param_1);
  return;
}




void FUN_00101924(undefined8 param_1)

{
  FUN_00101aa2(param_1);
  FUN_0010184e(param_1);
  return;
}




void FUN_00101aa2(undefined8 param_1)

{
  FUN_00101d92(param_1);
  return;
}




void FUN_001016af(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018e4(local_58);
  local_5c = 0xffffffff;
                    /* try { // try from 001016f8 to 00101748 has its CatchHandler @ 00101794 */
  __isoc99_fscanf(stdin,&DAT_00103005,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_001019d6(local_38,local_58);
                    /* try { // try from 00101750 to 00101754 has its CatchHandler @ 0010177f */
  FUN_0010255e(local_38);
  FUN_00101904(local_38);
  FUN_00101904(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f80(void)

{
  return;
}




void FUN_00102c47(void)

{
  return;
}




undefined8 FUN_00102398(undefined8 param_1)

{
  return param_1;
}




void FUN_001028dd(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010213c(undefined8 param_1)

{
  FUN_001022a7(param_1,1);
  return;
}




void FUN_001026d9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001015b8(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018e4(local_58);
  local_5c = 7;
                    /* try { // try from 001015fc to 00101639 has its CatchHandler @ 00101685 */
  FUN_0010199c(local_58,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_001019d6(local_38,local_58);
                    /* try { // try from 00101641 to 00101645 has its CatchHandler @ 00101670 */
  FUN_00102490(local_38);
  FUN_00101904(local_38);
  FUN_00101904(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101e4e(param_3);
  p_Var2 = (_List_node_base *)FUN_00101e60(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00101f2a(param_1,1);
  return;
}




undefined8 FUN_00101bfd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101f54(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001018e4(undefined8 param_1)

{
  FUN_001018c4(param_1);
  return;
}




void FUN_00101d92(void)

{
  return;
}




void FUN_00102c3c(void)

{
  return;
}




void FUN_00102969(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102c52(void)

{
  return;
}




void FUN_00101e00(undefined8 param_1,undefined8 param_2)

{
  FUN_00102109(param_1,param_2,1);
  return;
}




void FUN_001027af(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00102ce1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102caa,local_18);
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




void FUN_00101d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010201e(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_00102068(&local_18);
    FUN_0010208a(local_10,uVar2);
    FUN_00102044(&local_18);
  }
  return;
}




undefined8 FUN_0010201e(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102068(undefined8 *param_1)

{
  FUN_0010224c(*param_1);
  return;
}




void FUN_00101f82(undefined8 param_1,undefined8 param_2)

{
  FUN_00102238(param_1,param_2);
  return;
}




void FUN_00102c1b(void)

{
  return;
}




undefined8 FUN_0010226e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c94(void)

{
  return;
}




void FUN_00102000(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001023aa(void)

{
  return 0x555555555555555;
}




ulong FUN_001029c9(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030e4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001017be(void)

{
  FUN_001015b8();
  FUN_001016af();
  return;
}




undefined8 FUN_00101e4e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f54(undefined8 param_1,undefined8 param_2)

{
  FUN_00101f82(param_1,param_2);
  return param_1;
}




void FUN_001022a7(undefined8 param_1,undefined8 param_2)

{
  FUN_00102348(param_1,param_2,0);
  return;
}




void FUN_001026ff(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102c73(void)

{
  return;
}




undefined8 FUN_00102e2c(undefined8 *param_1)

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




void FUN_00102ec4(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102c68(void)

{
  return;
}




void FUN_00102c89(void)

{
  return;
}




long * FUN_00102694(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_0010285b(undefined4 param_1)

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




void FUN_001014a9(void)

{
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018e4(local_58);
  local_5c = 0xffffffff;
                    /* try { // try from 001014f2 to 00101542 has its CatchHandler @ 0010158e */
  __isoc99_fscanf(stdin,&DAT_00103005,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_0010199c(local_58,&local_5c);
  FUN_001019d6(local_38,local_58);
                    /* try { // try from 0010154a to 0010154e has its CatchHandler @ 00101579 */
  FUN_001023c2(local_38);
  FUN_00101904(local_38);
  FUN_00101904(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102280(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_0010224c(long param_1)

{
  FUN_0010232a(param_1 + 0x10);
  return;
}




undefined8 FUN_00101b50(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e30(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c4e(undefined8 param_1)

{
  return param_1;
}




void FUN_00102908(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102636(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101b50(param_1);
  FUN_00102694(&local_18);
  FUN_001026b8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001017d3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001026d9("Calling good()...");
  FUN_001017be();
  FUN_001026d9("Finished good()");
  FUN_001026d9("Calling bad()...");
  FUN_001014a9();
  FUN_001026d9("Finished bad()");
  return 0;
}




void FUN_00102ea5(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001019d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101c4e(param_2);
  FUN_00101bfd(&local_21,uVar1);
  FUN_00101c60(param_1,&local_21);
  FUN_00101950(&local_21);
  uVar1 = FUN_00101ce8(param_2);
  uVar2 = FUN_00101c98(param_2);
                    /* try { // try from 00101a62 to 00101a66 has its CatchHandler @ 00101a69 */
  FUN_00101d34(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020d8(undefined8 param_1)

{
  FUN_0010226e(param_1);
  return;
}




void FUN_00102238(void)

{
  return;
}




void FUN_00101fbe(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101fac(param_2);
  FUN_00101f82(param_1,uVar1);
  FUN_0010184e(param_1);
  return;
}




void FUN_00102348(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001023aa(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102c10(void)

{
  return;
}




undefined8 FUN_00101838(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001022e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00101e4e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101838(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102490(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int local_18;
  
  piVar2 = (int *)FUN_00102636(param_1);
  iVar1 = *piVar2;
  pvVar3 = operator_new__(0x28);
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)pvVar3 + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001026d9("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)pvVar3 + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00102731(*(undefined4 *)((long)pvVar3 + (long)local_18 * 4));
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  return;
}




void FUN_00102936(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102bfa(void)

{
  return;
}




void FUN_001026b8(undefined8 *param_1)

{
  FUN_00101da2(*param_1);
  return;
}




void FUN_00101904(undefined8 param_1)

{
  FUN_00101970(param_1);
  return;
}




undefined8 * FUN_00102044(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00101dc4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e30(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101f2a(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102bbb(void)

{
  return 0;
}




undefined8 FUN_00102bac(void)

{
  return 1;
}




void FUN_00102c9f(void)

{
  return;
}



