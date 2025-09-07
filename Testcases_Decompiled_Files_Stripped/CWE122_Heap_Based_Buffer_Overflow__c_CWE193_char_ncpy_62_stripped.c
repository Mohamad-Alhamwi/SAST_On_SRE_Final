
undefined8 FUN_00101afd(void)

{
  return 1;
}




void FUN_00101409(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(10);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return;
}




void FUN_00101b6c(void)

{
  return;
}




undefined8 FUN_00101d5a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101859(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001011a0(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101ed0(void)

{
  return;
}




void FUN_00101e60(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




ulong FUN_00101a1e(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101df6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b82(void)

{
  return;
}




void FUN_00101b77(void)

{
  return;
}




void FUN_0010172b(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101806(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101b0c(void)

{
  return 0;
}




void FUN_00101bae(void)

{
  return;
}




void FUN_00101bf0(void)

{
  return;
}




undefined8 FUN_00101c32(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101bfb,local_18);
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




void FUN_00101bcf(void)

{
  return;
}




void FUN_00101682(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101e15(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101bc4(void)

{
  return;
}




void FUN_001016aa(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b8d(void)

{
  return;
}




void FUN_00101650(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101b61(void)

{
  return;
}




void FUN_00101bda(void)

{
  return;
}




void FUN_00101756(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b4b(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_00101b40(void)

{
  return;
}




void FUN_001015b5(void)

{
  FUN_0010151c();
  return;
}




void FUN_00101bfb(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101781(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101b98(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_001011a0(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101446(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = malloc(0xb);
  *param_1 = (long)pvVar1;
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  return;
}




void FUN_00101700(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010151c(void)

{
  size_t sVar1;
  long in_FS_OFFSET;
  char *local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (char *)0x0;
  FUN_00101446(&local_28);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar1 = strlen(local_1b);
  strncpy(local_28,local_1b,sVar1 + 1);
  FUN_0010162a(local_28);
  free(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001017ac(undefined4 param_1)

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




void FUN_0010182e(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101483(void)

{
  size_t sVar1;
  long in_FS_OFFSET;
  char *local_28;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (char *)0x0;
  FUN_00101409(&local_28);
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar1 = strlen(local_1b);
  strncpy(local_28,local_1b,sVar1 + 1);
  FUN_0010162a(local_28);
  free(local_28);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b35(void)

{
  return;
}




undefined8 FUN_00101d7d(undefined8 *param_1)

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




void FUN_00101bb9(void)

{
  return;
}




void FUN_0010162a(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_001015c5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010162a("Calling good()...");
  FUN_001015b5();
  FUN_0010162a("Finished good()");
  FUN_0010162a("Calling bad()...");
  FUN_00101483();
  FUN_0010162a("Finished bad()");
  return 0;
}




void FUN_00101e34(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_001016d6(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001018ba(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




bool FUN_00101cff(pthread_t *param_1)

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




void FUN_00101ba3(void)

{
  return;
}




int FUN_00101b1b(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101b56(void)

{
  return;
}




void FUN_00101887(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




ulong FUN_0010191a(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101be5(void)

{
  return;
}



