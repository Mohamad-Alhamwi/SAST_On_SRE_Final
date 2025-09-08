
void FUN_00102290(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023f3(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_00102c12(void *param_1)

{
  free(param_1);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102a87(void)

{
  return;
}




void FUN_001026e6(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102309(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f9b(param_3);
  FUN_00102406(param_1,param_2,uVar1);
  return;
}




void FUN_00102468(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024ca(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00101cac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101718(local_20);
    uVar3 = FUN_00101f30(param_1);
    FUN_00101f42(uVar3,uVar2);
    FUN_00101f6c(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




void FUN_001021d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f9b(param_2);
  uVar2 = FUN_00101668(param_1);
  FUN_00101d2a(param_1,uVar2,uVar1);
  return;
}




void FUN_00101abe(undefined8 param_1)

{
  FUN_00101a9e(param_1);
  return;
}




undefined8 FUN_00101e76(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010214e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102368(void)

{
  return;
}




void FUN_00101718(long param_1)

{
  FUN_0010173a(param_1 + 0x10);
  return;
}




undefined8 FUN_00101ddc(undefined8 param_1)

{
  return param_1;
}




void FUN_001029ed(void)

{
  return;
}




void FUN_00101489(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010160a(param_1);
  __ptr = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)__ptr + local_88) = local_78[local_88];
  }
  *(undefined *)((long)__ptr + 99) = 0;
  FUN_001024e2(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a66(void)

{
  return;
}




void FUN_0010214e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101fae(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010226c(param_1);
  uVar2 = FUN_00101f30(param_1);
  FUN_00102290(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f9b(param_2);
  uVar4 = FUN_00101718(uVar1);
  FUN_00102309(uVar2,uVar4,uVar3);
  FUN_00102346(local_38,0);
  FUN_001022ca(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102a24(void)

{
  return;
}




void FUN_00102ab3(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102ccd(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010173a(undefined8 param_1)

{
  FUN_00101758(param_1);
  return;
}




void FUN_0010239e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102a19(void)

{
  return;
}




void FUN_00102cec(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00102a71(void)

{
  return;
}




void FUN_0010160a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_00101668(param_1);
  FUN_001016b4(&local_18);
  FUN_001016d8(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101a48(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00102a9d(void)

{
  return;
}




void FUN_0010226c(undefined8 param_1)

{
  FUN_001023c5(param_1,1);
  return;
}




void FUN_0010199c(void)

{
  FUN_00101883();
  return;
}




void FUN_00102226(void)

{
  return;
}




void FUN_001016fa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001019ac(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024e2("Calling good()...");
  FUN_0010199c();
  FUN_001024e2("Finished good()");
  FUN_001024e2("Calling bad()...");
  FUN_0010176a();
  FUN_001024e2("Finished bad()");
  return 0;
}




void FUN_00102664(undefined4 param_1)

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




undefined8 FUN_00101668(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016fa(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010253a(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b2a(undefined8 param_1)

{
  FUN_00101c9c(param_1);
  return;
}




void FUN_00102639(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f20(void)

{
  return;
}




bool FUN_00102bb7(pthread_t *param_1)

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




int FUN_001029d3(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c7c(undefined8 param_1)

{
  FUN_00101f20(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101a9e(undefined8 param_1)

{
  FUN_00101afe(param_1);
  return;
}




void FUN_00102a3a(void)

{
  return;
}




void FUN_00101f6c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102239(param_1,param_2,1);
  return;
}




void FUN_00102a5b(void)

{
  return;
}




void FUN_00102d20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_001027d2(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_001023f3(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010216c(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102a7c(void)

{
  return;
}




void FUN_00101ade(undefined8 param_1)

{
  FUN_00101b4a(param_1);
  return;
}




undefined8 FUN_001029b5(void)

{
  return 1;
}




long * FUN_001016b4(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




ulong FUN_001028d6(long param_1,ulong param_2,long param_3)

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




void FUN_001029f8(void)

{
  return;
}




undefined8 FUN_001024b8(undefined8 param_1)

{
  return param_1;
}




void FUN_001023c5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102468(param_1,param_2,0);
  return;
}




undefined8 FUN_001020fa(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f42(undefined8 param_1,undefined8 param_2)

{
  FUN_00102226(param_1,param_2);
  return;
}




void FUN_001021b6(undefined8 *param_1)

{
  FUN_0010237c(*param_1);
  return;
}




void FUN_00101c9c(void)

{
  return;
}




void FUN_0010210c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020fa(param_2);
  FUN_001020d0(param_1,uVar1);
  FUN_00101a28(param_1);
  return;
}




void FUN_00102a50(void)

{
  return;
}




void FUN_001025b8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101883(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101abe(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(100);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 001018e9 to 00101926 has its CatchHandler @ 00101972 */
  FUN_00101b76(local_58,&local_60);
  FUN_00101b76(local_58,&local_60);
  FUN_00101b76(local_58,&local_60);
  FUN_00101bb0(local_38,local_58);
                    /* try { // try from 0010192e to 00101932 has its CatchHandler @ 0010195d */
  FUN_00101549(local_38);
  FUN_00101ade(local_38);
  FUN_00101ade(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b4a(undefined8 param_1)

{
  FUN_00101cac(param_1);
  FUN_00101a7e(param_1);
  return;
}




void FUN_001020d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102368(param_1,param_2);
  return;
}




void FUN_00101a7e(undefined8 param_1)

{
  FUN_00101b2a(param_1);
  return;
}




void FUN_001022ca(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00102239(*param_1,param_1[1],1);
  }
  return;
}




void FUN_0010258e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102cae(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102aea(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102ab3,local_18);
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




undefined8 FUN_00102c35(undefined8 *param_1)

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




void FUN_00102239(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010239e(param_1,param_2,param_3);
  return;
}




void FUN_0010260e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102078(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101afe(undefined8 param_1)

{
  FUN_00101c7c(param_1);
  FUN_00101a28(param_1);
  return;
}




void FUN_00102a45(void)

{
  return;
}




void FUN_00101bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101ddc(param_2);
  FUN_00101d8b(&local_21,uVar1);
  FUN_00101dee(param_1,&local_21);
  FUN_00101b2a(&local_21);
  uVar1 = FUN_00101e76(param_2);
  uVar2 = FUN_00101e26(param_2);
                    /* try { // try from 00101c3c to 00101c40 has its CatchHandler @ 00101c43 */
  FUN_00101ec2(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001016d8(undefined8 *param_1)

{
  FUN_00101718(*param_1);
  return;
}




undefined8 FUN_00101f9b(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f9b(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fae(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_00102078(param_1,1);
  return;
}




void FUN_00102a0e(void)

{
  return;
}




void FUN_001026be(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101e26(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010214e(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d90(void)

{
  return;
}




undefined8 * FUN_00102192(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_00101b76(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101668(param_1);
  FUN_00101d2a(param_1,uVar1,param_2);
  return;
}




undefined8 FUN_00101d8b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001020a2(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102a03(void)

{
  return;
}




void FUN_0010176a(void)

{
  long in_FS_OFFSET;
  undefined *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101abe(local_58);
  local_60 = (undefined *)0x0;
  local_60 = (undefined *)malloc(0x32);
  if (local_60 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_60 = 0;
                    /* try { // try from 001017d0 to 0010180d has its CatchHandler @ 00101859 */
  FUN_00101b76(local_58,&local_60);
  FUN_00101b76(local_58,&local_60);
  FUN_00101b76(local_58,&local_60);
  FUN_00101bb0(local_38,local_58);
                    /* try { // try from 00101815 to 00101819 has its CatchHandler @ 00101844 */
  FUN_00101489(local_38);
  FUN_00101ade(local_38);
  FUN_00101ade(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102772(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102a2f(void)

{
  return;
}




void FUN_0010237c(long param_1)

{
  FUN_0010244a(param_1 + 0x10);
  return;
}




void FUN_00102508(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101a28(undefined8 param_1)

{
  FUN_00101a48(param_1);
  return;
}




long FUN_00102346(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102562(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102711(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_001024ca(void)

{
  return 0x555555555555555;
}




undefined8 FUN_00101f30(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102a92(void)

{
  return;
}




void FUN_001024e2(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101ec2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_0010216c(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021b6(&local_18);
    FUN_001021d8(local_10,uVar2);
    FUN_00102192(&local_18);
  }
  return;
}




void FUN_0010244a(undefined8 param_1)

{
  FUN_001024b8(param_1);
  return;
}




undefined8 FUN_00101758(undefined8 param_1)

{
  return param_1;
}




void FUN_001025e3(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010273f(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102aa8(void)

{
  return;
}




undefined8 FUN_00101a11(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102406(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f9b(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a11(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_001020a2(undefined8 param_1,undefined8 param_2)

{
  FUN_001020d0(param_1,param_2);
  return param_1;
}




void FUN_00101549(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  ulong local_88;
  undefined local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010160a(param_1);
  __ptr = (void *)*puVar1;
  memset(local_78,0x43,99);
  local_78[99] = 0;
  for (local_88 = 0; local_88 < 100; local_88 = local_88 + 1) {
    *(undefined *)((long)__ptr + local_88) = local_78[local_88];
  }
  *(undefined *)((long)__ptr + 99) = 0;
  FUN_001024e2(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101dee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020fa(param_2);
  FUN_0010210c(param_1,uVar1);
  return;
}




undefined8 FUN_001029c4(void)

{
  return 0;
}



