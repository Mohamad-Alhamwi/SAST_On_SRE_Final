
void FUN_00101ec0(void)

{
  return;
}




void FUN_00101a53(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001013c9(void)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  long in_FS_OFFSET;
  undefined8 *local_98;
  void *local_90;
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
  for (ppuVar2 = &local_98; ppuVar2 != &local_98; ppuVar2 = (undefined8 **)((long)ppuVar2 + -0x1000)
      ) {
    *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  }
  *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  local_90 = (void *)((ulong)((long)ppuVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x101489;
  memset((void *)((ulong)((long)ppuVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_90 + 99) = 0;
  local_98 = (undefined8 *)((long)local_90 + -8);
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x1014c8;
  memset(&local_88,0x43,99);
  puVar1 = local_98;
  local_28 = local_28 & 0xffffff;
  *local_98 = local_88;
  local_98[1] = local_80;
  local_98[2] = local_78;
  local_98[3] = local_70;
  local_98[4] = local_68;
  local_98[5] = local_60;
  local_98[6] = local_58;
  local_98[7] = local_50;
  local_98[8] = local_48;
  local_98[9] = local_40;
  local_98[10] = local_38;
  local_98[0xb] = local_30;
  *(uint *)(local_98 + 0xc) = local_28;
  *(undefined *)((long)local_98 + 99) = 0;
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x101555;
  FUN_00101952(puVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x10156a;
  __stack_chk_fail();
}




/* WARNING: Removing unreachable block (ram,0x00101647) */

void FUN_00101570(void)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  long in_FS_OFFSET;
  undefined8 *local_98;
  undefined8 *local_90;
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
  for (ppuVar2 = &local_98; ppuVar2 != &local_98; ppuVar2 = (undefined8 **)((long)ppuVar2 + -0x1000)
      ) {
    *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  }
  *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  local_90 = (undefined8 *)((ulong)((long)ppuVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x101630;
  memset((undefined8 *)((ulong)((long)ppuVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_90 + 99) = 0;
  local_98 = local_90;
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x101679;
  memset(&local_88,0x43,99);
  puVar1 = local_98;
  local_28 = local_28 & 0xffffff;
  *local_98 = local_88;
  local_98[1] = local_80;
  local_98[2] = local_78;
  local_98[3] = local_70;
  local_98[4] = local_68;
  local_98[5] = local_60;
  local_98[6] = local_58;
  local_98[7] = local_50;
  local_98[8] = local_48;
  local_98[9] = local_40;
  local_98[10] = local_38;
  local_98[0xb] = local_30;
  *(uint *)(local_98 + 0xc) = local_28;
  *(undefined *)((long)local_98 + 99) = 0;
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x101706;
  FUN_00101952(puVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x10171b;
  __stack_chk_fail();
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f28)();
  return;
}




void FUN_00101f18(void)

{
  return;
}




void FUN_00101e89(void)

{
  return;
}




void FUN_00101978(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101eb5(void)

{
  return;
}




undefined8 FUN_00101f5a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f23,local_18);
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




void FUN_00101f23(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101e34(void)

{
  return 0;
}




void FUN_001018c4(void)

{
  FUN_00101570();
  FUN_00101721();
  return;
}




void FUN_00101e73(void)

{
  return;
}




void FUN_00101ecb(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_0010211e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102190(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101be2(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010215c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




ulong FUN_00101c42(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00102027(pthread_t *param_1)

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




void FUN_00101baf(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101f0d(void)

{
  return;
}




void FUN_00102200(void)

{
  return;
}




int FUN_00101e43(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ef7(void)

{
  return;
}




void FUN_00101952(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101eec(void)

{
  return;
}




void FUN_00101b2e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e5d(void)

{
  return;
}




void FUN_001019d2(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102082(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001019fe(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101a28(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101a7e(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101e25(void)

{
  return 1;
}




void FUN_00101ad4(undefined4 param_1)

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




void FUN_00101e68(void)

{
  return;
}




void FUN_00101e7e(void)

{
  return;
}




void FUN_00101aa9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ee1(void)

{
  return;
}




void FUN_00101f02(void)

{
  return;
}




void FUN_0010213d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00105008);
    }
    FUN_00101310();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101b81(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101b56(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101d46(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001018e3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101952("Calling good()...");
  FUN_001018c4();
  FUN_00101952("Finished good()");
  FUN_00101952("Calling bad()...");
  FUN_001013c9();
  FUN_00101952("Finished bad()");
  return 0;
}




void FUN_001019aa(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e9f(void)

{
  return;
}




void FUN_00101721(void)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  long in_FS_OFFSET;
  undefined8 *local_98;
  undefined8 *local_90;
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
  for (ppuVar2 = &local_98; ppuVar2 != &local_98; ppuVar2 = (undefined8 **)((long)ppuVar2 + -0x1000)
      ) {
    *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  }
  *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  local_90 = (undefined8 *)((ulong)((long)ppuVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x1017e1;
  memset((undefined8 *)((ulong)((long)ppuVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_90 + 99) = 0;
  local_98 = local_90;
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x10181c;
  memset(&local_88,0x43,99);
  puVar1 = local_98;
  local_28 = local_28 & 0xffffff;
  *local_98 = local_88;
  local_98[1] = local_80;
  local_98[2] = local_78;
  local_98[3] = local_70;
  local_98[4] = local_68;
  local_98[5] = local_60;
  local_98[6] = local_58;
  local_98[7] = local_50;
  local_98[8] = local_48;
  local_98[9] = local_40;
  local_98[10] = local_38;
  local_98[0xb] = local_30;
  *(uint *)(local_98 + 0xc) = local_28;
  *(undefined *)((long)local_98 + 99) = 0;
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x1018a9;
  FUN_00101952(puVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppuVar2 + -0x78) = 0x1018be;
  __stack_chk_fail();
}




undefined8 FUN_001020a5(undefined8 *param_1)

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




void FUN_00101ed6(void)

{
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}




void FUN_00101e94(void)

{
  return;
}




void FUN_00101eaa(void)

{
  return;
}



