
void FUN_001018fe(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101bee(void)

{
  return;
}




void FUN_00101c04(void)

{
  return;
}




void FUN_00101c0f(void)

{
  return;
}




void FUN_0010162c(void)

{
  FUN_00101551();
  return;
}




void FUN_001016a1(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c72(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c5c(void)

{
  return;
}




void FUN_00101bac(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104028 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101370();
    DAT_00104028 = 1;
    return;
  }
  return;
}




void FUN_0010174d(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101931(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101bc2(void)

{
  return;
}




void FUN_00101c67(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f10)();
  return;
}




undefined8 FUN_00101b74(void)

{
  return 1;
}




void FUN_00101c25(void)

{
  return;
}




void FUN_001017f8(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101383) */
/* WARNING: Removing unreachable block (ram,0x0010138f) */

void FUN_00101370(void)

{
  return;
}




void FUN_00101bcd(void)

{
  return;
}




void FUN_00101777(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101721(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101dd1(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001016c7(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c1a(void)

{
  return;
}




bool FUN_00101d76(pthread_t *param_1)

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




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101429(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_54;
  int local_50;
  int local_4c;
  ulong local_48;
  int *local_40;
  int *local_38;
  ulong local_30;
  undefined4 *local_28;
  char local_1e [14];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = &local_54;
  local_38 = &local_54;
  local_54 = -1;
  local_50 = -1;
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  local_1e[6] = '\0';
  local_1e[7] = '\0';
  local_1e[8] = '\0';
  local_1e[9] = '\0';
  local_1e[10] = '\0';
  local_1e[0xb] = '\0';
  local_1e[0xc] = '\0';
  local_1e[0xd] = '\0';
  pcVar1 = fgets(local_1e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001016a1("fgets() failed.");
  }
  else {
    local_50 = atoi(local_1e);
  }
  *local_40 = local_50;
  local_4c = *local_38;
  local_30 = (long)local_4c << 2;
  local_28 = (undefined4 *)operator_new__(local_30);
  for (local_48 = 0; local_48 < (ulong)(long)local_4c; local_48 = local_48 + 1) {
    local_28[local_48] = 0;
  }
  FUN_001016f9(*local_28);
  if (local_28 != (undefined4 *)0x0) {
    operator_delete__(local_28);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017cd(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101bd8(void)

{
  return;
}




void FUN_00101bf9(void)

{
  return;
}




undefined8 FUN_0010163c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001016a1("Calling good()...");
  FUN_0010162c();
  FUN_001016a1("Finished good()");
  FUN_001016a1("Calling bad()...");
  FUN_00101429();
  FUN_001016a1("Finished bad()");
  return 0;
}




void FUN_001018a5(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




ulong FUN_00101a95(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001020a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffbc : 0x001015a0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00101551(void)

{
  long in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  ulong local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined8 local_20;
  undefined4 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &local_44;
  local_28 = &local_44;
  local_40 = 0x14;
  local_44 = 0x14;
  local_3c = 0x14;
  local_20 = 0x50;
  local_18 = (undefined4 *)operator_new__(0x50);
  for (local_38 = 0; local_38 < (ulong)(long)local_3c; local_38 = local_38 + 1) {
    local_18[local_38] = 0;
  }
  FUN_001016f9(*local_18);
  if (local_18 != (undefined4 *)0x0) {
    operator_delete__(local_18);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f50(void)

{
  return;
}




void FUN_00101be3(void)

{
  return;
}




void FUN_00101c51(void)

{
  return;
}




void FUN_00101ee0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101c30(void)

{
  return;
}




void FUN_00101823(undefined4 param_1)

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




void FUN_001018d0(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




int FUN_00101b92(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c3b(void)

{
  return;
}




void FUN_00101c46(void)

{
  return;
}




undefined8 FUN_00101ca9(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c72,local_18);
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




undefined8 FUN_00101b83(void)

{
  return 0;
}




undefined8 FUN_00101df4(undefined8 *param_1)

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




void FUN_00101e6d(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_00101991(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001020a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001013c4) */
/* WARNING: Removing unreachable block (ram,0x001013d0) */

void FUN_001013a0(void)

{
  return;
}




void FUN_001017a2(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010187d(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101e8c(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001016f9(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101eab(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101bb7(void)

{
  return;
}



