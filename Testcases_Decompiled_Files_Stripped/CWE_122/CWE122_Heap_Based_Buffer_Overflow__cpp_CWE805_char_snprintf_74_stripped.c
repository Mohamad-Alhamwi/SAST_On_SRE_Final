
void FUN_001036c4(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00103774(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001039af(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101aa0(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_80,100,"%s",local_78);
  FUN_00103a6c(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00104141(pthread_t *param_1)

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




void FUN_00103bc3(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001038f2(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_84;
  char *local_80;
  undefined local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 2;
  puVar1 = (undefined8 *)FUN_00101aa0(param_1,&local_84);
  local_80 = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  snprintf(local_80,100,"%s",local_78);
  FUN_00103a6c(local_80);
  if (local_80 != (char *)0x0) {
    operator_delete__(local_80);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010290c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a32(param_1);
  uVar2 = FUN_001030a8(param_2);
  uVar1 = FUN_001030be(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f38(param_1);
  uVar2 = FUN_0010322d(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d26(param_1);
  uVar2 = FUN_0010324b(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_00103400(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010364d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010339d(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00103066(undefined8 param_1,undefined8 param_2)

{
  FUN_001028b0(param_1,param_2);
  return param_1;
}




void FUN_00103fb9(void)

{
  return;
}




undefined8 FUN_0010339d(undefined8 param_1)

{
  return param_1;
}




void FUN_0010332d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022ca(param_5);
  uVar2 = FUN_001022b8(param_4);
  uVar3 = FUN_001022a6(param_3);
  FUN_00103582(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_0010214c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a32(param_1);
  uVar2 = FUN_00101d02(param_1);
  FUN_00102a48(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001021ec(void)

{
  return;
}




undefined8
FUN_00101e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_001022ca(param_5);
  uVar2 = FUN_001022b8(param_4);
  uVar3 = FUN_001022a6(param_3);
  local_40 = FUN_001022dc(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101f08 to 00101f4b has its CatchHandler @ 00101f89 */
  uVar1 = FUN_00102705(local_40);
  local_38 = FUN_0010235c(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010210e(param_1,local_40);
    FUN_00102842(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102758(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 FUN_0010186e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_00102d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined4 * FUN_00103466(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_0010302e(param_2);
  puVar2 = (undefined4 *)FUN_00103672(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




long FUN_00102058(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001016b1(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010199c(local_88);
                    /* try { // try from 001016ec to 00101780 has its CatchHandler @ 001017cc */
  puVar1 = (undefined *)operator_new__(100);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101aa0(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101aa0(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101aa0(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019dc(local_58,local_88);
                    /* try { // try from 00101788 to 0010178c has its CatchHandler @ 001017b7 */
  FUN_001039af(local_58);
  FUN_001019bc(local_58);
  FUN_001019bc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d5a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_0010339d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_0010206e(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028ee(local_18,param_1);
  FUN_0010290c(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010199c(undefined8 param_1)

{
  FUN_0010197c(param_1);
  return;
}




void FUN_00103aec(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001029b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021fa(param_2);
  uVar2 = FUN_0010326a(param_1);
  FUN_0010327c(uVar2,uVar1);
  return;
}




undefined8 FUN_001020f7(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined4 FUN_00101d86(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021ec(param_1);
  return unaff_EBX;
}




void FUN_001019bc(undefined8 param_1)

{
  FUN_00101a62(param_1);
  return;
}




void FUN_00102266(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b5c(param_2);
  uVar1 = FUN_00102b7a(uVar1);
  FUN_00102b8c(param_1,uVar1);
  return;
}




void FUN_00103cc9(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103a6c(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_00102d26(long param_1)

{
  return param_1 + 0x20;
}




undefined8 FUN_00103050(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103f82(void)

{
  return;
}




void FUN_00101a62(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d02(param_1);
  FUN_00101c98(param_1,uVar1);
  FUN_0010195c(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_001014b0();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00104006(void)

{
  return;
}




void FUN_001032a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010350a(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001041bf(undefined8 *param_1)

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




undefined8 FUN_00103f3f(void)

{
  return 1;
}




undefined8 FUN_001032ea(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102860(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103066(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010350a(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103bee(undefined4 param_1)

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




void FUN_00103844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103715(param_3);
  FUN_001038a0(param_1,param_2,uVar1);
  return;
}




void FUN_00104238(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103881(undefined8 param_1)

{
  FUN_00102b5c(param_1);
  return;
}




void FUN_00101e6a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103fda(void)

{
  return;
}




undefined8 FUN_001022b8(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ac4(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_001017f9(void)

{
  FUN_001016b1();
  return;
}




undefined8 * FUN_00102f96(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103672(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103715(param_2);
  FUN_00103728(uVar1,uVar2);
  return;
}




void FUN_00102be2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0010186e(0x30,param_2);
  uVar1 = FUN_001022ca(param_5);
  uVar2 = FUN_001022b8(param_4);
  uVar3 = FUN_001022a6(param_3);
  uVar4 = FUN_001021fa(param_2);
  uVar5 = FUN_0010326a(param_1);
                    /* try { // try from 00102c71 to 00102c75 has its CatchHandler @ 00102c78 */
  FUN_0010332d(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_00101d42(undefined8 param_1)

{
  FUN_0010219c(param_1);
  return;
}




undefined8 FUN_00103715(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fae(void)

{
  return;
}




undefined8 FUN_00102042(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00102b7a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c78(void)

{
  return;
}




undefined8 FUN_00101d60(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_0010219c(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102842(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a06(long param_1)

{
  FUN_00101c58(param_1);
  FUN_00101c78(param_1);
  FUN_001018f2(param_1 + 8);
  return;
}




void FUN_001029f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010326a(param_1);
  FUN_001032a6(uVar1,param_2,1);
  return;
}




void FUN_0010403d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101d18(undefined8 param_1,undefined8 param_2)

{
  FUN_0010214c(param_1,param_2);
  return;
}




void FUN_00103b98(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101809(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103a6c("Calling good()...");
  FUN_001017f9();
  FUN_00103a6c("Finished good()");
  FUN_00103a6c("Calling bad()...");
  FUN_00101569();
  FUN_00103a6c("Finished bad()");
  return 0;
}




void FUN_001018f2(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010191c(param_1);
  return;
}




void FUN_00103c48(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001032ff(undefined8 param_1,undefined8 param_2)

{
  FUN_00103532(param_1,param_2,0);
  return;
}




void FUN_001019dc(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bcc(param_1,param_2);
  return;
}




void FUN_00103532(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036ac(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_0010221c(undefined8 param_1)

{
  return param_1;
}




void FUN_0010327c(undefined8 param_1,undefined8 param_2)

{
  FUN_001034f6(param_1,param_2);
  return;
}




void FUN_00101c88(void)

{
  return;
}




void FUN_00103a92(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00102a48(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00102705(local_38);
    cVar1 = FUN_00101dce(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020e1(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020f7(local_38);
    }
  }
  FUN_00102842(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00102b5c(undefined8 param_1)

{
  FUN_001032ea(param_1);
  return;
}




void FUN_00104011(void)

{
  return;
}




long FUN_00101897(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_001033b0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102842(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104257(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b06(undefined8 param_1)

{
  FUN_001032d8(param_1);
  return;
}




undefined8 FUN_001034ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103b18(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00103774(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103826(param_2);
  puVar2 = (undefined4 *)FUN_00102b7a(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00103660(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ffb(void)

{
  return;
}




void FUN_0010197c(undefined8 param_1)

{
  FUN_00101a06(param_1);
  return;
}




long FUN_00102f38(long param_1)

{
  return param_1 + 0x18;
}




undefined8 FUN_001022a6(undefined8 param_1)

{
  return param_1;
}




void FUN_001021fa(long param_1)

{
  FUN_00102b06(param_1 + 0x20);
  return;
}




undefined8 FUN_00101d02(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




int FUN_00103f5d(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_001032d8(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ec0)();
  return;
}




void FUN_00101c58(undefined8 param_1)

{
  FUN_001020d2(param_1);
  return;
}




long FUN_00102a32(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00102cc0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102842(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e08(undefined8 param_1,undefined8 param_2)

{
  FUN_00102266(param_1,param_2);
  return;
}




undefined8 FUN_0010326a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103826(undefined8 param_1)

{
  FUN_00103881(param_1);
  return;
}




void FUN_0010191c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010401c(void)

{
  return;
}




void FUN_0010302e(long param_1)

{
  FUN_00103448(param_1 + 0x20);
  return;
}




void FUN_00101569(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010199c(local_88);
                    /* try { // try from 001015a4 to 00101638 has its CatchHandler @ 00101684 */
  puVar1 = (undefined *)operator_new__(0x32);
  *puVar1 = 0;
  local_58[0] = 0;
  puVar2 = (undefined8 *)FUN_00101aa0(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101aa0(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101aa0(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019dc(local_58,local_88);
                    /* try { // try from 00101640 to 00101644 has its CatchHandler @ 0010166f */
  FUN_001038f2(local_58);
  FUN_001019bc(local_58);
  FUN_001019bc(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104320(void)

{
  return;
}




void FUN_00101884(void)

{
  return;
}




void FUN_00103f98(void)

{
  return;
}




void FUN_00102842(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010324b(undefined8 param_1)

{
  FUN_001018c4(param_1);
  return;
}




undefined8 FUN_001020e1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 * FUN_00102fc2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_001022dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102bb6(param_1);
  uVar2 = FUN_001022ca(param_4);
  uVar3 = FUN_001022b8(param_3);
  uVar4 = FUN_001022a6(param_2);
  FUN_00102be2(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_00103582(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022a6(param_3);
  uVar1 = FUN_001022b8(param_4);
  FUN_00101e08(local_38,uVar1);
  FUN_001022ca(param_5);
  uVar1 = FUN_0010186e(0x10,param_2);
                    /* try { // try from 0010360a to 0010360e has its CatchHandler @ 00103611 */
  FUN_001036c4(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101bcc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fd2(param_1,param_2);
  lVar1 = FUN_00102042(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102058(param_1);
                    /* try { // try from 00101c27 to 00101c2b has its CatchHandler @ 00101c31 */
    uVar3 = FUN_0010206e(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_00103c70(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104276(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001038a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103715(param_3);
  puVar3 = (undefined8 *)FUN_0010186e(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_0010235c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_00102cc0(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a32(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d3c(local_50);
    cVar2 = FUN_00101dce(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d3c(local_50);
      cVar2 = FUN_00101dce(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102fee(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d26(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d26(local_60);
          local_48[1] = 0;
          FUN_00102d5a(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102fc2(local_48);
          uVar6 = FUN_00102d3c(*puVar5);
          cVar2 = FUN_00101dce(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d9a(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020e1(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d5a(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f4e(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f38(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f38(local_60);
        uVar6 = FUN_00102f38(local_60);
        FUN_00102f4e(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f96(local_48);
        uVar6 = FUN_00102d3c(*puVar5);
        cVar2 = FUN_00101dce(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d9a(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020e1(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d5a(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f4e(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026ea;
  }
  lVar3 = FUN_00102d10(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023fe:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d26(local_60);
    uVar6 = FUN_00102d3c(*puVar5);
    cVar2 = FUN_00101dce(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023fe;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d26(local_60);
    local_48[1] = 0;
    FUN_00102d5a(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d9a(local_60,param_3);
  }
LAB_001026ea:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104027(void)

{
  return;
}




undefined8 FUN_00104074(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010403d,local_18);
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




void FUN_001028b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00103094(param_1,param_2);
  return;
}




void FUN_00102f4e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010339d(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_0010339d(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_001042b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001022ca(undefined8 param_1)

{
  return param_1;
}




long FUN_001018c4(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_0010222e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010221c(param_2);
  FUN_00102b24(param_1,uVar1);
  return;
}




void FUN_00101a42(undefined8 param_1)

{
  FUN_00101c88(param_1);
  return;
}




void FUN_00103fe5(void)

{
  return;
}




void FUN_0010210e(undefined8 param_1,undefined8 param_2)

{
  FUN_001029b4(param_1,param_2);
  FUN_001029f8(param_1,param_2);
  return;
}




void FUN_00103448(undefined8 param_1)

{
  FUN_00103660(param_1);
  return;
}




ulong FUN_00103e60(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f8d(void)

{
  return;
}




undefined4 FUN_00101dce(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_0010195c(undefined8 param_1)

{
  FUN_00101a42(param_1);
  return;
}




void FUN_00102d3c(undefined8 param_1)

{
  FUN_00102705(param_1);
  return;
}




undefined8 FUN_0010364d(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b42(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103fcf(void)

{
  return;
}




void FUN_001020d2(void)

{
  return;
}




void FUN_00101fd2(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102860(param_1,param_2);
  FUN_001028da(param_1,param_2);
  FUN_001018f2(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001028da(void)

{
  return;
}




void FUN_001028ee(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103ff0(void)

{
  return;
}




void FUN_00102fee(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010339d(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103c9b(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_00101df5(undefined8 param_1)

{
  return param_1;
}




void FUN_00103fa3(void)

{
  return;
}




void FUN_001034f6(void)

{
  return;
}




undefined8 FUN_001036ac(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00102bb6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010326a(param_1);
  FUN_001032ff(uVar1,1);
  return;
}




void FUN_00101c98(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020e1(local_28);
    FUN_00101c98(param_1,uVar1);
    lVar2 = FUN_001020f7(local_28);
    FUN_0010210e(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001037b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0010186e(0x30,param_2);
  uVar1 = FUN_00103715(param_3);
  uVar2 = FUN_001021fa(param_2);
  uVar3 = FUN_0010326a(param_1);
  FUN_00103844(uVar3,uVar2,uVar1);
  return;
}




void FUN_00103f77(void)

{
  return;
}




undefined8 FUN_00101e32(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010221c(param_2);
  FUN_0010222e(param_1,uVar1);
  return param_1;
}




undefined8 FUN_00103f4e(void)

{
  return 0;
}




void FUN_00103fc4(void)

{
  return;
}




long FUN_001030be(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103466(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034ca(param_2);
                    /* try { // try from 0010312d to 001031bf has its CatchHandler @ 001031eb */
    uVar2 = FUN_001030be(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034e0(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103466(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034ca(local_38);
      uVar2 = FUN_001030be(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034e0(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




ulong FUN_00103d5c(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103728(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bb6(param_1);
  uVar2 = FUN_00103715(param_2);
  FUN_001037b8(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00102b24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010221c(param_2);
  FUN_00102b8c(param_1,uVar1);
  return;
}




undefined8 FUN_00102d9a(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_00101d02(param_1);
  local_50 = FUN_00102a32(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00102705(local_58);
    local_59 = FUN_00101dce(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020e1(local_58);
    }
    else {
      local_58 = FUN_001020f7(local_58);
    }
  }
  FUN_00102842(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_001033b0(param_1);
    cVar1 = FUN_00101d60(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00103400(local_38,&local_58,&local_50);
      goto LAB_00102f1c;
    }
    FUN_00102f96(&local_48);
  }
  uVar2 = FUN_00102d3c(local_48);
  cVar1 = FUN_00101dce(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102fee(local_38,&local_48,&local_40);
  }
  else {
    FUN_00103400(local_38,&local_58,&local_50);
  }
LAB_00102f1c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010419c(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102b8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010221c(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_001030a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102705(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010302e(param_1);
  FUN_00103050(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8
FUN_00102758(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a32(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d3c(param_3);
      uVar5 = FUN_00102705(param_4);
      cVar1 = FUN_00101dce(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027dc;
      }
    }
  }
  bVar2 = true;
LAB_001027dc:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102842(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101dac(undefined8 *param_1)

{
  FUN_001021fa(*param_1);
  return;
}




undefined8 FUN_001034e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_00101aa0(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_00101d18(param_1,param_2);
  local_28 = FUN_00101d42(param_1);
  cVar2 = FUN_00101d60(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d86(param_1);
    uVar3 = FUN_00101dac(&local_38);
    cVar2 = FUN_00101dce(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b40;
    }
  }
  bVar1 = true;
LAB_00101b40:
  if (bVar1) {
    uVar3 = FUN_00101df5(param_2);
    FUN_00101e32(local_30,uVar3);
    FUN_00101e6a(&local_28,&local_38);
    local_38 = FUN_00101e8c(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101dac(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_0010322d(undefined8 param_1)

{
  FUN_00101897(param_1);
  return;
}




void FUN_00103b6d(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103094(void)

{
  return;
}




void FUN_00103cfc(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104032(void)

{
  return;
}



