
void FUN_00101d20(undefined8 param_1)

{
  FUN_00101fc4(param_1);
  return;
}




void FUN_00101a40(void)

{
  FUN_00101918();
  return;
}




void FUN_001021f2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101acc(undefined8 param_1)

{
  FUN_00101aec(param_1);
  return;
}




void FUN_00102708(undefined4 param_1)

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




void FUN_00101e92(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010219e(param_2);
  FUN_001021b0(param_1,uVar1);
  return;
}




void FUN_00102aa7(void)

{
  return;
}




void FUN_00102b20(void)

{
  return;
}




void FUN_00101fc4(void)

{
  return;
}




void FUN_00102ac8(void)

{
  return;
}




void FUN_001025de(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 * FUN_00102236(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102b8e(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b57,local_18);
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




void FUN_0010211c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




undefined8 FUN_00102210(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
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




int FUN_00102a77(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00102876(long param_1,ulong param_2,long param_3)

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




void FUN_00102174(undefined8 param_1,undefined8 param_2)

{
  FUN_0010240c(param_1,param_2);
  return;
}




void FUN_0010236e(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_001022dd(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00102aff(void)

{
  return;
}




void FUN_00101d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010179a(local_20);
    uVar3 = FUN_00101fd4(param_1);
    FUN_00101fe6(uVar3,uVar2);
    FUN_00102010(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00102a68(void)

{
  return 0;
}




void FUN_00101bce(undefined8 param_1)

{
  FUN_00101d40(param_1);
  return;
}




void FUN_001026b2(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102b4c(void)

{
  return;
}




void FUN_001025ac(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




long * FUN_00101736(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102606(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




bool FUN_00102c5b(pthread_t *param_1)

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




void FUN_00102469(undefined8 param_1,undefined8 param_2)

{
  FUN_0010250c(param_1,param_2,0);
  return;
}




void FUN_001024aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_0010203f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101ab5(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010265c(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101bee(undefined8 param_1)

{
  FUN_00101d50(param_1);
  FUN_00101b22(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




undefined8 FUN_00102cb6(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010177c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_001023ea(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102a91(void)

{
  return;
}




undefined8 FUN_0010219e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010175a(undefined8 *param_1)

{
  FUN_0010179a(*param_1);
  return;
}




void FUN_00101ba2(undefined8 param_1)

{
  FUN_00101d20(param_1);
  FUN_00101acc(param_1);
  return;
}




void FUN_00102dc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102ad3(void)

{
  return;
}




void FUN_00102d90(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101aec(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_0010225a(undefined8 *param_1)

{
  FUN_00102420(*param_1);
  return;
}




void FUN_00101918(void)

{
  long in_FS_OFFSET;
  void *local_68;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b62(local_58);
  local_68 = (void *)0x0;
                    /* try { // try from 0010194d to 001019ca has its CatchHandler @ 00101a16 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = local_60;
  FUN_00101c1a(local_58,&local_68);
  FUN_00101c1a(local_58,&local_68);
  FUN_00101c1a(local_58,&local_68);
  FUN_00101c54(local_38,local_58);
                    /* try { // try from 001019d2 to 001019d6 has its CatchHandler @ 00101a01 */
  FUN_0010158a(local_38);
  FUN_00101b82(local_38);
  FUN_00101b82(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102687(undefined8 param_1)

{
  printf("%ld\n",param_1);
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
  FUN_00101b62(local_58);
  local_68 = 0;
                    /* try { // try from 00101821 to 001018a2 has its CatchHandler @ 001018ee */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_68 = (long)local_60 + -8;
  FUN_00101c1a(local_58,&local_68);
  FUN_00101c1a(local_58,&local_68);
  FUN_00101c1a(local_58,&local_68);
  FUN_00101c54(local_38,local_58);
                    /* try { // try from 001018aa to 001018ae has its CatchHandler @ 001018d9 */
  FUN_00101489(local_38);
  FUN_00101b82(local_38);
  FUN_00101b82(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001017da(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101ab5(undefined8 param_1,undefined8 param_2)

{
  return param_2;
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




void FUN_00102e30(void)

{
  return;
}




void FUN_00102ae9(void)

{
  return;
}




void FUN_00102420(long param_1)

{
  FUN_001024ee(param_1 + 0x10);
  return;
}




void FUN_00102762(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001021b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010219e(param_2);
  FUN_00102174(param_1,uVar1);
  FUN_00101acc(param_1);
  return;
}




undefined8 FUN_0010256e(void)

{
  return 0x555555555555555;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00101b42(undefined8 param_1)

{
  FUN_00101ba2(param_1);
  return;
}




void FUN_00101b62(undefined8 param_1)

{
  FUN_00101b42(param_1);
  return;
}




void FUN_0010179a(long param_1)

{
  FUN_001017bc(param_1 + 0x10);
  return;
}




void FUN_00101c54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e80(param_2);
  FUN_00101e2f(&local_21,uVar1);
  FUN_00101e92(param_1,&local_21);
  FUN_00101bce(&local_21);
  uVar1 = FUN_00101f1a(param_2);
  uVar2 = FUN_00101eca(param_2);
                    /* try { // try from 00101ce0 to 00101ce4 has its CatchHandler @ 00101ce7 */
  FUN_00101f66(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102ade(void)

{
  return;
}




void FUN_001027e3(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102af4(void)

{
  return;
}




void FUN_00101dce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_0010203f(param_3);
  p_Var2 = (_List_node_base *)FUN_00102052(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010211c(param_1,1);
  return;
}




void FUN_00102632(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102b57(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c1a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016ea(param_1);
  FUN_00101dce(param_1,uVar1,param_2);
  return;
}




void FUN_00102010(undefined8 param_1,undefined8 param_2)

{
  FUN_001022dd(param_1,param_2,1);
  return;
}




undefined8 FUN_00102052(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102310(param_1);
  uVar2 = FUN_00101fd4(param_1);
  FUN_00102334(local_38,uVar2,uVar1);
  uVar3 = FUN_0010203f(param_2);
  uVar4 = FUN_0010179a(uVar1);
  FUN_001023ad(uVar2,uVar4,uVar3);
  FUN_001023ea(local_38,0);
  FUN_0010236e(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101f66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102210(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010225a(&local_18);
    FUN_0010227c(local_10,uVar2);
    FUN_00102236(&local_18);
  }
  return;
}




void FUN_00102abd(void)

{
  return;
}




void FUN_001022dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102442(param_1,param_2,param_3);
  return;
}




void FUN_00102b36(void)

{
  return;
}




void FUN_00101fe6(undefined8 param_1,undefined8 param_2)

{
  FUN_001022ca(param_1,param_2);
  return;
}




void FUN_00102442(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102816(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
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
  FUN_00102586(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101e80(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f1a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102334(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102497(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_00102586(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102b15(void)

{
  return;
}




undefined8 FUN_00102cd9(undefined8 *param_1)

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




void FUN_00102d71(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b0a(void)

{
  return;
}




void FUN_00102b2b(void)

{
  return;
}




void FUN_0010250c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010256e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_001026dd(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_00102310(undefined8 param_1)

{
  FUN_00102469(param_1,1);
  return;
}




void FUN_001022ca(void)

{
  return;
}




void FUN_00101b22(undefined8 param_1)

{
  FUN_00101bce(param_1);
  return;
}




void FUN_00101b82(undefined8 param_1)

{
  FUN_00101bee(param_1);
  return;
}




void FUN_0010278a(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001024ee(undefined8 param_1)

{
  FUN_0010255c(param_1);
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
  FUN_00102586(puVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d52(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00101a50(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102586("Calling good()...");
  FUN_00101a40();
  FUN_00102586("Finished good()");
  FUN_00102586("Calling bad()...");
  FUN_001017ec();
  FUN_00102586("Finished bad()");
  return 0;
}




undefined8 FUN_00102146(undefined8 param_1,undefined8 param_2)

{
  FUN_00102174(param_1,param_2);
  return param_1;
}




void FUN_0010227c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010203f(param_2);
  uVar2 = FUN_001016ea(param_1);
  FUN_00101dce(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00101fd4(undefined8 param_1)

{
  return param_1;
}




void FUN_0010240c(void)

{
  return;
}




void FUN_00102ab2(void)

{
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




void FUN_001023ad(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010203f(param_3);
  FUN_001024aa(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00102497(undefined8 param_1)

{
  return param_1;
}




void FUN_001027b5(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102a9c(void)

{
  return;
}




undefined8 FUN_0010255c(undefined8 param_1)

{
  return param_1;
}




void FUN_001017bc(undefined8 param_1)

{
  FUN_001017da(param_1);
  return;
}




undefined8 FUN_0010203f(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d40(void)

{
  return;
}




undefined8 FUN_00101e2f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102146(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00101eca(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021f2(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102a59(void)

{
  return 1;
}




ulong FUN_0010297a(long param_1,ulong param_2,long param_3)

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




void FUN_00102b41(void)

{
  return;
}



