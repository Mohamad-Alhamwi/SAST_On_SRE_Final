
void FUN_001021aa(undefined8 *param_1)

{
  FUN_00102370(*param_1);
  return;
}




void FUN_00102705(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001021cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101f8f(param_2);
  uVar2 = FUN_0010166a(param_1);
  FUN_00101d1e(param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_001024ac(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a70(void)

{
  return;
}




void FUN_001024fc(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001029b8(void)

{
  return 0;
}




void FUN_00101b3e(undefined8 param_1)

{
  FUN_00101ca0(param_1);
  FUN_00101a72(param_1);
  return;
}




void FUN_00102100(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ee(param_2);
  FUN_001020c4(param_1,uVar1);
  FUN_00101a1c(param_1);
  return;
}




void FUN_001029f7(void)

{
  return;
}




undefined8 FUN_00101a05(undefined8 param_1,undefined8 param_2)

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




void FUN_00101d1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00101f8f(param_3);
  p_Var2 = (_List_node_base *)FUN_00101fa2(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_0010206c(param_1,1);
  return;
}




void FUN_0010160c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_0010166a(param_1);
  FUN_001016b6(&local_18);
  FUN_001016da(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101c70(undefined8 param_1)

{
  FUN_00101f14(param_1);
  return;
}




void FUN_0010206c(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00101f14(void)

{
  return;
}




void FUN_00102a86(void)

{
  return;
}




undefined8 FUN_0010166a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001016fc(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102a39(void)

{
  return;
}




void FUN_00102a7b(void)

{
  return;
}




long FUN_0010233a(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102a4f(void)

{
  return;
}




undefined8 FUN_00102c29(undefined8 *param_1)

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




void FUN_00102766(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010262d(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010187e(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab2(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(0xb);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001018dd to 0010191a has its CatchHandler @ 00101966 */
  FUN_00101b6a(local_58,&local_60);
  FUN_00101b6a(local_58,&local_60);
  FUN_00101b6a(local_58,&local_60);
  FUN_00101ba4(local_38,local_58);
                    /* try { // try from 00101922 to 00101926 has its CatchHandler @ 00101951 */
  FUN_0010154a(local_38);
  FUN_00101ad2(local_38);
  FUN_00101ad2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010235c(void)

{
  return;
}




undefined8 * FUN_00102186(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




void FUN_0010171a(long param_1)

{
  FUN_0010173c(param_1 + 0x10);
  return;
}




void FUN_00102142(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010154a(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010160c(param_1);
  __ptr = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar2 + 1; local_38 = local_38 + 1) {
    *(char *)((long)__ptr + local_38) = local_1b[local_38];
  }
  FUN_001024d6(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010173c(undefined8 param_1)

{
  FUN_0010175a(param_1);
  return;
}




void FUN_00102658(undefined4 param_1)

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




void FUN_00101990(void)

{
  FUN_0010187e();
  return;
}




void FUN_00101a72(undefined8 param_1)

{
  FUN_00101b1e(param_1);
  return;
}




void FUN_00102392(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00101dd0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cc1(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a5a(void)

{
  return;
}




void FUN_00102370(long param_1)

{
  FUN_0010243e(param_1 + 0x10);
  return;
}




void FUN_00102602(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101af2(undefined8 param_1)

{
  FUN_00101c70(param_1);
  FUN_00101a1c(param_1);
  return;
}




void FUN_0010252e(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102a91(void)

{
  return;
}




void FUN_0010245c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001024be(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




undefined8 FUN_001019a0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001024d6("Calling good()...");
  FUN_00101990();
  FUN_001024d6("Finished good()");
  FUN_001024d6("Calling bad()...");
  FUN_0010176c();
  FUN_001024d6("Finished bad()");
  return 0;
}




undefined8 FUN_00101e6a(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102142(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010243e(undefined8 param_1)

{
  FUN_001024ac(param_1);
  return;
}




void FUN_001023fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00101f8f(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a05(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001024d6(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00102096(undefined8 param_1,undefined8 param_2)

{
  FUN_001020c4(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101424) */
/* WARNING: Removing unreachable block (ram,0x00101430) */

void FUN_00101400(void)

{
  return;
}




void FUN_00102260(undefined8 param_1)

{
  FUN_001023b9(param_1,1);
  return;
}




void FUN_00102d10(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101a1c(undefined8 param_1)

{
  FUN_00101a3c(param_1);
  return;
}




void FUN_00102a65(void)

{
  return;
}




void FUN_0010222d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102392(param_1,param_2,param_3);
  return;
}




void FUN_00101489(undefined8 param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  ulong local_38;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010160c(param_1);
  __ptr = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  for (local_38 = 0; local_38 < sVar2 + 1; local_38 = local_38 + 1) {
    *(char *)((long)__ptr + local_38) = local_1b[local_38];
  }
  FUN_001024d6(__ptr);
  free(__ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102582(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001025ac(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001023b9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010245c(param_1,param_2,0);
  return;
}




void FUN_001026da(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_001027c6(long param_1,ulong param_2,long param_3)

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




/* WARNING: Removing unreachable block (ram,0x001013e3) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */

void FUN_001013d0(void)

{
  return;
}




void FUN_001026b2(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101f8f(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a18(void)

{
  return;
}




void FUN_00102a2e(void)

{
  return;
}




void FUN_001029ec(void)

{
  return;
}




undefined8 FUN_00101e1a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102142(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102ade(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102aa7,local_18);
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




void FUN_00102a0d(void)

{
  return;
}




void FUN_00102d80(void)

{
  return;
}




undefined8 FUN_001020ee(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b1e(undefined8 param_1)

{
  FUN_00101c90(param_1);
  return;
}




undefined8 FUN_00101fa2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102260(param_1);
  uVar2 = FUN_00101f24(param_1);
  FUN_00102284(local_38,uVar2,uVar1);
  uVar3 = FUN_00101f8f(param_2);
  uVar4 = FUN_0010171a(uVar1);
  FUN_001022fd(uVar2,uVar4,uVar3);
  FUN_0010233a(local_38,0);
  FUN_001022be(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00102284(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023e7(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




undefined8 FUN_001029a9(void)

{
  return 1;
}




void FUN_001029e1(void)

{
  return;
}




undefined8 FUN_00102c06(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001016fc(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101a92(undefined8 param_1)

{
  FUN_00101af2(param_1);
  return;
}




void FUN_00101f60(undefined8 param_1,undefined8 param_2)

{
  FUN_0010222d(param_1,param_2,1);
  return;
}




void FUN_0010221a(void)

{
  return;
}




undefined8 FUN_00102160(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102aa7(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




bool FUN_00102bab(pthread_t *param_1)

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




void FUN_00102556(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001025d7(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101f24(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a3c(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101ad2(undefined8 param_1)

{
  FUN_00101b3e(param_1);
  return;
}




void FUN_00101eb6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    cVar1 = FUN_00102160(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_001021aa(&local_18);
    FUN_001021cc(local_10,uVar2);
    FUN_00102186(&local_18);
  }
  return;
}




void FUN_00101b6a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010166a(param_1);
  FUN_00101d1e(param_1,uVar1,param_2);
  return;
}




void FUN_001022be(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010222d(*param_1,param_1[1],1);
  }
  return;
}




void FUN_00101ca0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_0010171a(local_20);
    uVar3 = FUN_00101f24(param_1);
    FUN_00101f36(uVar3,uVar2);
    FUN_00101f60(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_001024be(void)

{
  return 0x555555555555555;
}




void FUN_00102a44(void)

{
  return;
}




void FUN_001020c4(undefined8 param_1,undefined8 param_2)

{
  FUN_0010235c(param_1,param_2);
  return;
}




void FUN_00101ab2(undefined8 param_1)

{
  FUN_00101a92(param_1);
  return;
}




void FUN_00102a9c(void)

{
  return;
}




void FUN_00101ba4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101dd0(param_2);
  FUN_00101d7f(&local_21,uVar1);
  FUN_00101de2(param_1,&local_21);
  FUN_00101b1e(&local_21);
  uVar1 = FUN_00101e6a(param_2);
  uVar2 = FUN_00101e1a(param_2);
                    /* try { // try from 00101c30 to 00101c34 has its CatchHandler @ 00101c37 */
  FUN_00101eb6(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a02(void)

{
  return;
}




void FUN_001016da(undefined8 *param_1)

{
  FUN_0010171a(*param_1);
  return;
}




void FUN_00102ce0(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001022fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f8f(param_3);
  FUN_001023fa(param_1,param_2,uVar1);
  return;
}




void FUN_00102ca2(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010176c(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ab2(local_58);
  local_60 = (void *)0x0;
  local_60 = malloc(10);
  if (local_60 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
                    /* try { // try from 001017cb to 00101808 has its CatchHandler @ 00101854 */
  FUN_00101b6a(local_58,&local_60);
  FUN_00101b6a(local_58,&local_60);
  FUN_00101b6a(local_58,&local_60);
  FUN_00101ba4(local_38,local_58);
                    /* try { // try from 00101810 to 00101814 has its CatchHandler @ 0010183f */
  FUN_00101489(local_38);
  FUN_00101ad2(local_38);
  FUN_00101ad2(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101de2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001020ee(param_2);
  FUN_00102100(param_1,uVar1);
  return;
}




undefined8 FUN_001023e7(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ef8)();
  return;
}




void FUN_00102a23(void)

{
  return;
}




undefined8 FUN_00101d7f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102096(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




long * FUN_001016b6(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




void FUN_00102733(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_001028ca(long param_1,ulong param_2,long param_3)

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




undefined8 FUN_0010175a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101f36(undefined8 param_1,undefined8 param_2)

{
  FUN_0010221a(param_1,param_2);
  return;
}




void FUN_00101c90(void)

{
  return;
}




int FUN_001029c7(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}



