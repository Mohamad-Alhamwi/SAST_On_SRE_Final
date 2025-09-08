
undefined8 FUN_00101e51(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102168(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101489(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_0010168c(param_1);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_001025a8(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b0e(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010229e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102061(param_2);
  uVar2 = FUN_001016ea(param_1);
  FUN_00101df0(param_1,uVar2,uVar1);
  return;
}




void FUN_00101b84(undefined8 param_1)

{
  FUN_00101b64(param_1);
  return;
}




void FUN_00102805(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101fe6(void)

{
  return;
}




void FUN_00102af5(void)

{
  return;
}




void FUN_00102b6e(void)

{
  return;
}




undefined8 FUN_00102061(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b16(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_001026a9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001022ff(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102464(param_1,param_2,param_3);
  return;
}




void FUN_001021d2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c0(param_2);
  FUN_00102196(param_1,uVar1);
  FUN_00101aee(param_1);
  return;
}




void FUN_001022ec(void)

{
  return;
}




void FUN_0010179a(long param_1)

{
  FUN_001017bc(param_1 + 0x10);
  return;
}




void FUN_00102ad4(void)

{
  return;
}




int FUN_00102a99(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102232(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102442(long param_1)

{
  FUN_00102510(param_1 + 0x10);
  return;
}




void FUN_00102b4d(void)

{
  return;
}




void FUN_00101eb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021c0(param_2);
  FUN_001021d2(param_1,uVar1);
  return;
}




void FUN_00102ac9(void)

{
  return;
}




void FUN_00101d42(undefined8 param_1)

{
  FUN_00101fe6(param_1);
  return;
}




void FUN_001027ac(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102cd8(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010267e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017bc(undefined8 param_1)

{
  FUN_001017da(param_1);
  return;
}




void FUN_001026d4(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102d74(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010252e(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102590(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_00102590(void)

{
  return 0x555555555555555;
}




void FUN_0010272a(undefined4 param_1)

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




void FUN_00101d62(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_001013d0();
    DAT_00106020 = 1;
    return;
  }
  return;
}




void FUN_00102d93(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001017ec(void)

{
  long in_FS_OFFSET;
  long local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b84(local_58);
  local_68 = 0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
                    /* try { // try from 00101876 to 001018b3 has its CatchHandler @ 001018ff */
  FUN_00101c3c(local_58,&local_68);
  FUN_00101c3c(local_58,&local_68);
  FUN_00101c3c(local_58,&local_68);
  FUN_00101c76(local_38,local_58);
                    /* try { // try from 001018bb to 001018bf has its CatchHandler @ 001018ea */
  FUN_00101489(local_38);
  FUN_00101ba4(local_38);
  FUN_00101ba4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010248b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010252e(param_1,param_2,0);
  return;
}




void FUN_00102adf(void)

{
  return;
}




undefined8 * FUN_00102258(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_001017da(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101ea2(param_2);
  FUN_00101e51(&local_21,uVar1);
  FUN_00101eb4(param_1,&local_21);
  FUN_00101bf0(&local_21);
  uVar1 = FUN_00101f3c(param_2);
  uVar2 = FUN_00101eec(param_2);
                    /* try { // try from 00101d02 to 00101d06 has its CatchHandler @ 00101d09 */
  FUN_00101f88(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102b21(void)

{
  return;
}




void FUN_00101ba4(undefined8 param_1)

{
  FUN_00101c10(param_1);
  return;
}




void FUN_00102332(undefined8 param_1)

{
  FUN_0010248b(param_1,1);
  return;
}




void FUN_00101aee(undefined8 param_1)

{
  FUN_00101b0e(param_1);
  return;
}




void FUN_00102784(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101ad7(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00101a72(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001025a8("Calling good()...");
  FUN_00101a62();
  FUN_001025a8("Finished good()");
  FUN_001025a8("Calling bad()...");
  FUN_001017ec();
  FUN_001025a8("Finished bad()");
  return 0;
}




void FUN_00101b64(undefined8 param_1)

{
  FUN_00101bc4(param_1);
  return;
}




undefined8 FUN_001016ea(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010177c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b37(void)

{
  return;
}




void FUN_001024cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102061(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ad7(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102838(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010227c(undefined8 *param_1)

{
  FUN_00102442(*param_1);
  return;
}




void FUN_00102628(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010168c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016ea(param_1);
  FUN_00101736(&local_18);
  FUN_0010175a(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101bf0(undefined8 param_1)

{
  FUN_00101d62(param_1);
  return;
}




void FUN_00101c10(undefined8 param_1)

{
  FUN_00101d72(param_1);
  FUN_00101b44(param_1);
  return;
}




void FUN_00101929(void)

{
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b84(local_58);
  local_68 = (void *)0x0;
  local_60 = malloc(100);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
                    /* try { // try from 001019af to 001019ec has its CatchHandler @ 00101a38 */
  FUN_00101c3c(local_58,&local_68);
  FUN_00101c3c(local_58,&local_68);
  FUN_00101c3c(local_58,&local_68);
  FUN_00101c76(local_38,local_58);
                    /* try { // try from 001019f4 to 001019f8 has its CatchHandler @ 00101a23 */
  FUN_0010158a(local_38);
  FUN_00101ba4(local_38);
  FUN_00101ba4(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102061(param_3);
  p_Var2 = (_List_node_base *)FUN_00102074(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010213e(param_1,1);
  return;
}




void FUN_00102b2c(void)

{
  return;
}




undefined8 FUN_00102a7b(void)

{
  return 1;
}




void FUN_00102b42(void)

{
  return;
}




undefined8 FUN_00101eec(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102214(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026ff(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00101d72(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010179a(local_20);
    uVar3 = FUN_00101ff6(param_1);
    FUN_00102008(uVar3,uVar2);
    FUN_00102032(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102168(undefined8 param_1,undefined8 param_2)

{
  FUN_00102196(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102cfb(undefined8 *param_1)

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




undefined8 FUN_001021c0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102032(undefined8 param_1,undefined8 param_2)

{
  FUN_001022ff(param_1,param_2,1);
  return;
}




void FUN_00102b0b(void)

{
  return;
}




void FUN_001023cf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102061(param_3);
  FUN_001024cc(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102bb0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b79,local_18);
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




void FUN_0010213e(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102510(undefined8 param_1)

{
  FUN_0010257e(param_1);
  return;
}




undefined8 FUN_00102a8a(void)

{
  return 0;
}




long * FUN_00101736(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00101f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102232(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010227c(&local_18);
    FUN_0010229e(local_10,uVar2);
    FUN_00102258(&local_18);
  }
  return;
}




void FUN_00102008(undefined8 param_1,undefined8 param_2)

{
  FUN_001022ec(param_1,param_2);
  return;
}




void FUN_0010242e(void)

{
  return;
}




void FUN_00102654(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102b63(void)

{
  return;
}




void FUN_00102db2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102e50(void)

{
  return;
}




void FUN_00102b58(void)

{
  return;
}




void FUN_00102b79(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001025ce(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001027d7(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010158a(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar2 = (long *)FUN_0010168c(param_1);
  puVar1 = (undefined8 *)*plVar2;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_001025a8(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010240c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102390(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022ff(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101bc4(undefined8 param_1)

{
  FUN_00101d42(param_1);
  FUN_00101aee(param_1);
  return;
}




void FUN_00101c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016ea(param_1);
  FUN_00101df0(param_1,uVar1,param_2);
  return;
}




ulong FUN_00102898(long param_1,ulong param_2,long param_3)

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




void FUN_001025a8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010175a(undefined8 *param_1)

{
  FUN_0010179a(*param_1);
  return;
}




void FUN_00102de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101b44(undefined8 param_1)

{
  FUN_00101bf0(param_1);
  return;
}




void FUN_00102214(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102356(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024b9(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102074(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102332(param_1);
  uVar2 = FUN_00101ff6(param_1);
  FUN_00102356(local_38,uVar2,uVar1);
  uVar3 = FUN_00102061(param_2);
  uVar4 = FUN_0010179a(uVar1);
  FUN_001023cf(uVar2,uVar4,uVar3);
  FUN_0010240c(local_38,0);
  FUN_00102390(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




undefined8 FUN_001024b9(undefined8 param_1)

{
  return param_1;
}




void FUN_00102b00(void)

{
  return;
}




void FUN_0010177c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102464(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_0010257e(undefined8 param_1)

{
  return param_1;
}




ulong FUN_0010299c(long param_1,ulong param_2,long param_3)

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




void FUN_00102aea(void)

{
  return;
}




void FUN_00102600(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a62(void)

{
  FUN_00101929();
  return;
}




void FUN_00102196(undefined8 param_1,undefined8 param_2)

{
  FUN_0010242e(param_1,param_2);
  return;
}




undefined8 FUN_00101ea2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f3c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102214(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101ff6(undefined8 param_1)

{
  return param_1;
}




void FUN_00102abe(void)

{
  return;
}




void FUN_00102ab3(void)

{
  return;
}




bool FUN_00102c7d(pthread_t *param_1)

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



